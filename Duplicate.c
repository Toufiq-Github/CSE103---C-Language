#include <stdio.h>

int main() {
    int arr[100], num, count = 0;
    int index = 0;


    while (1) {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        arr[index++] = num;
    }


    for (int i = 0; i < index; i++) {
        for (int j = i + 1; j < index; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate value found: %d\n", arr[i]);
                count++;
            }
        }
    }

    printf("The duplicate value appeared %d times.\n", count);

    return 0;
}

