#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num % 2 == 0 && num != 0) {
        num /= 2;
        count++;
    }

    printf("Divisible by 2: %d times\n", count);
    return 0;
}

