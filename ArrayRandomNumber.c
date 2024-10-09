#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[50], userNum;


    srand(time(0));
    for (int i = 0; i < 50; i++) {
        arr[i] = (rand() % 50) + 1;
    }

    while (1) {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &userNum);

        if (userNum == -1) {
            break;
        }

        int found = 0;
        for (int i = 0; i < 50; i++) {
            if (arr[i] == userNum) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("Number is present in the array.\n");
        } else {
            printf("Number is not present in the array.\n");
        }
    }

    return 0;
}

