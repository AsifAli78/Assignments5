#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int sum, smallest, largest;
    float average;

    // Input four integers
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Calculate sum
    sum = num1 + num2 + num3 + num4;

    // Calculate average
    average = sum / 4.0;

    // Find smallest
    smallest = num1;
    if (num2 < smallest) smallest = num2;
    if (num3 < smallest) smallest = num3;
    if (num4 < smallest) smallest = num4;

    // Find largest
    largest = num1;
    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;
    if (num4 > largest) largest = num4;

    // Output results
    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
