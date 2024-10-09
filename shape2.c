#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    i = n - 1;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}
