#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    int temp = exponent;
    while (temp > 0) {
        result *= base;
        temp--;
    }

    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
