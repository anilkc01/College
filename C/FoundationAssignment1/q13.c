/*
13. Write a program to calculate tax based on annual income:
    Up to 10,000: No tax
    10,001 to 50,000: 10% tax
    50,001 to 100,000: 20% tax
    Above 100,000: 30% tax
*/
#include <stdio.h>

int main() {
    float income, tax;

    // Input validation for income
    do {
        printf("Enter your annual income: ");
        if (scanf("%f", &income) != 1 || income < 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n'); 
        } else {
            break;
        }
    } while (1);

    // Calculate tax based on income brackets
    if (income <= 10000) {
        tax = 0;
    } else if (income <= 50000) {
        tax = (income - 10000) * 0.10;
    } else if (income <= 100000) {
        tax = (income - 50000) * 0.20 + (50000 - 10000) * 0.10;
    } else {
        tax = (income - 100000) * 0.30 + (100000 - 50000) * 0.20 + (50000 - 10000) * 0.10;
    }

    // Print the calculated tax
    printf("The calculated tax on an income of %.2f is: %.2f\n", income, tax);

    return 0;
}
