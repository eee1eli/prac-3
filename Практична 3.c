#include <stdio.h>
#include <math.h>

int c(int p) {

    if (p <= 2) {
        return pow(2, p);
    }
    int numbers = (pow(2, p))- (p - 2);

    return numbers;
}

int main() {
    int p;
    printf("Enter count of digit (p): ");
    scanf("%d", &p);

    if (p < 1 || p > 30) {
        printf("Count of digit must be between 1 and 30\n");
        return 1;
    }

    int result = c(p);
    printf("The number of %d digit numbers where three identical digits do not stand next to each other: %d\n", p, result);

    return 0;
}
