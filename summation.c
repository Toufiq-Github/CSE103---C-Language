#include <stdio.h>

int sumN(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumN(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Summation of all natural numbers from 1 to %d: %d\n", n, sumN(n));
    return 0;
}

