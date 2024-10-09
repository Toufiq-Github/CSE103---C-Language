#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0.0, average;

    printf("Enter numbers (-1 to terminate): \n");

    for (;;) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        sum += num;
        count++;
    }

    if (count != 0) {
        average = sum / count;
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}
