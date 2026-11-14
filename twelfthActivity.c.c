#include <stdio.h>

int main() {
    int rows;
    int number;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {

        // Print spaces to arrange the triangle
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        number = 1;

        // Calculate and print the numbers
        for (int j = 0; j <= i; j++) {
            printf("%4d", number);

            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
