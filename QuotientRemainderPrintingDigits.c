#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    int quotient = a / b;
    int remainder = a % b;

    printf("Quotient: %d, Remainder: %d\n", quotient, remainder);

    int n;
    printf("Enter an integer (between 1 and 32767): ");
    scanf("%d", &n);

    while (n > 0) {
        printf("%d  ", n % 10);
        n /= 10;
    }
    printf("\n");

    return 0;
}
