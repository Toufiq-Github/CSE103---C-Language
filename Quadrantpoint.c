#include <stdio.h>

int main() {
    int x, y;
    printf("Enter X and Y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("First Quadrant\n");
    } else if (x < 0 && y > 0) {
        printf("Second Quadrant\n");
    } else if (x < 0 && y < 0) {
        printf("Third Quadrant\n");
    } else if (x > 0 && y < 0) {
        printf("Fourth Quadrant\n");
    } else if (x == 0 && y == 0) {
        printf("Origin\n");
    } else {
        printf("On an axis\n");
    }

    return 0;
}
