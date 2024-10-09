#include <stdio.h>

int main() {
    int N, i = 1;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    while (i <= N * 2) {
        printf("%d %d\n", i, i);
        i++;
    }

    return 0;
}

