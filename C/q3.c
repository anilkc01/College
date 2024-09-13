/*
3. WAP to calculate simple interest for a set of values representing principle, number of years and rate of interest 
(P*T*R)/100
*/
#include <stdio.h>

int main() {
    float p, r, t, I;
    int isValid;

    // ask for principal amount until valid input
    do {
        printf("Enter the principal amount: ");
        isValid = scanf("%f", &p);
        
        
        if (isValid != 1 || p <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || p <= 0);

    // ask for year until valid input
    do {
        printf("Enter the number of years: ");
        isValid = scanf("%f", &t);
        
        if (isValid != 1 || t <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || t <= 0);

    // ask for interest rate until valid input
    do {
        printf("Enter the rate of interest: ");
        isValid = scanf("%f", &r);
        
        if (isValid != 1 || r <= 0) {
            printf("Invalid input!\n");

            while (getchar() != '\n');
        }
    } while (isValid != 1 || r <= 0);

    
    I = (p * r * t) / 100;

    printf("The Simple Interest is: %.2f\n", I);

    return 0;
}
