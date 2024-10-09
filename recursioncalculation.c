#include <stdio.h>

int integerPower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * integerPower(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    int result = integerPower(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
