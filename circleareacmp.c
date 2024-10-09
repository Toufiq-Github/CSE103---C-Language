#include <stdio.h>
#define PI 3.1416

double calculateArea(double radius) {
    return PI * radius * radius;
}

void checkArea(double area) {
    if (area > 25) {
        printf("Greater than 25\n");
    } else {
        printf("Less than 25\n");
    }
}

int main() {
    double radius;
    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);

    double area = calculateArea(radius);
    checkArea(area);

    return 0;
}
