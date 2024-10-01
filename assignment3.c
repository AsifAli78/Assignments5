#include <stdio.h>

int main() {
    int n, i, square;

    // Input from user
    printf("Enter an integer n: ");
    scanf("%d", &n);

    // Loop through numbers and print even squares
    for (i = 1; i * i <= n; i++) {
        square = i * i;
        
        // Check if the square is even
        if (square % 2 == 0) {
            printf("%d\n", square);
        }
    }

    return 0;
}
