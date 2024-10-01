#include <stdio.h>

int main() {
    int grade;

    // Input from user
    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    // Check for invalid input
    if (grade < 0 || grade > 100) {
        printf("Error! Invalid Entry\n");
    } 
    // Check for letter grades
    else if (grade >= 90 && grade <= 100) {
        printf("Letter grade: A\n");
    } 
    else if (grade >= 80 && grade <= 89) {
        printf("Letter grade: B\n");
    } 
    else if (grade >= 70 && grade <= 79) {
        printf("Letter grade: C\n");
    } 
    else if (grade >= 60 && grade <= 69) {
        printf("Letter grade: D\n");
    } 
    else {
        printf("Letter grade: F\n");
    }

    return 0;
}
