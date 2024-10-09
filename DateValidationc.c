#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date in day/month/year format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    int isValid = 1;

    if (year < 1) {
        isValid = 0;
    } else if (month < 1 || month > 12) {
        isValid = 0;
    } else if (day < 1 || day > 31) {
        isValid = 0;
    } else if (month == 2) {
        // Check for leap year
        int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (leap && day > 29) {
            isValid = 0;
        } else if (!leap && day > 28) {
            isValid = 0;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            isValid = 0;
        }
    }

    if (isValid) {
        printf("The date is valid.\n");
    } else {
        printf("The date is invalid.\n");
    }

    return 0;
}
