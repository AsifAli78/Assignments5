#include <stdio.h>

int main() {
    int month1, day1, year1;
    int month2, day2, year2;

    // Input first date
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    // Input second date
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    // Compare the years first
    if (year1 < year2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    } else if (year1 > year2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    // If the years are the same, compare the months
    else if (month1 < month2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    } else if (month1 > month2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    // If the months are also the same, compare the days
    else if (day1 < day2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    } else if (day1 > day2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    // If all components are the same, the dates are equal
    else {
        printf("The two dates are the same.\n");
    }

    return 0;
}
