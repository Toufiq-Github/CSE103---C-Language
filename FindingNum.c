#include <stdio.h>

int findOdd(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    return result;
}

int main() {
    int arr[] = {12, 12, 14, 90, 14, 14, 14, 90, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The number that occurs odd number of times is: %d\n", findOdd(arr, n));

    return 0;
}

