/*
6.  WAP to calculate the perimeter of a rectangle.
    Formula: Perimeter = 2 * (length + breadth)
*/

#include <stdio.h>

int main() {
    float L, B, P;
    int validInput;

    // ask for valid user input of length 
    do {
        printf("Enter the length of the rectangle: ");
        validInput = scanf("%f", &L);
        
        // Check if input is valid and positive
        if (validInput != 1 || L <= 0) {
            printf("Invalid input! Length must be a positive number.\n");
            while (getchar() != '\n');
        }
    } while (validInput != 1 || L <= 0);

    // ask for user input of valid breadth
    do {
        printf("Enter the breadth: ");
        validInput = scanf("%f", &B);
        
        // Check if input is valid and positive
        if (validInput != 1 || B <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (validInput != 1 || B <= 0);

    P = 2 * (L + B);

    printf("The perimeter of the rectangle is: %.2f\n", P);

    return 0;
}
