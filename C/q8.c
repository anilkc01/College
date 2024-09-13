/*
8.  WAP to calculate the compound interest. 
    Formula: Compound Interest = Principal * (1 + Rate/100)^Time - Principal
*/

#include <stdio.h>
#include <math.h> 

int main() {
    float P, R, T, CI;
    int isValid;

    // input valid principa;
    do {
        printf("Enter the principal amount: ");
        isValid = scanf("%f", &P);
        

        if (isValid != 1 || P <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || P <= 0);

    // input for valid rate
    do {
        printf("Enter the annual interest rate : ");
        isValid = scanf("%f", &R);

        if (isValid != 1 || R < 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || R < 0);

    // take time input
    do {
        printf("Enter the time (in years): ");
        isValid = scanf("%f", &T);

        if (isValid != 1 || T <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || T <= 0);

    CI = P * (pow((1 + R / 100), T)) - P;

    printf("The compound interest is: %.2f\n", CI);

    return 0;
}
