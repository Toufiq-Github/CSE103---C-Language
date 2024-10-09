#include <stdio.h>

int main() {
    int rows, i = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
