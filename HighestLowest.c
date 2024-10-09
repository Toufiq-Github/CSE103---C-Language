#include <stdio.h>
#include <limits.h>

int main() {
    int num, highest = INT_MIN, lowest = INT_MAX;

    printf("Enter numbers (-1 to terminate):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        if (num > highest) highest = num;
        if (num < lowest) lowest = num;
    }

    if (highest != INT_MIN && lowest != INT_MAX) {
        printf("Difference: %d\n", highest - lowest);
    } else {
        printf("No numbers entered.\n");
    }
    return 0;
}
