#include <stdio.h>

int isPrime(int n, int i) {
    if (i == 1) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return isPrime(n, i - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 is not a prime number\n");
    } else if (isPrime(n, n / 2)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
