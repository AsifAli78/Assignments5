#include <stdio.h>

// Function to calculate factorial
double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double e = 1.0;

    // Input the integer n
    printf("Enter n = ");
    scanf("%d", &n);

    // Calculate the value of e using the series
    for (int i = 1; i <= n; i++) {
        e += 1.0 / factorial(i);
    }

    // Output the result
    printf("e = %.6f\n", e);

    return 0;
}
