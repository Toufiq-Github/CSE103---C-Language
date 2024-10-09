#include <stdio.h>

int main() {
    int num, fact = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
