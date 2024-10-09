#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    int (*fibPtr)(int);
    fibPtr = fibonacci;

    printf("Enter the term number for Fibonacci series: ");
    scanf("%d", &n);

    int result = fibPtr(n);
    printf("The %dth term of the Fibonacci series is: %d\n", n, result);

    return 0;
}

