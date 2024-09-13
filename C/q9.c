/*
9. Write a program to check voting eligibility based on age and country. For simplicity, assume the voting age is 18 for all countries
*/
#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char country[100];
    int validInput;

    // Input validation for age
    do {
        printf("Enter your age: ");
        validInput = scanf("%d", &age);

        if (validInput != 1 || age < 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (validInput != 1 || age < 0);

    // Clear buffer
    while (getchar() != '\n');

    // Input for country
    printf("Enter your country: ");
    scanf("%s",country);

    // Check voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote in %s.\n", country);
    } else {
        printf("You are not eligible to vote in %s.\n", country);
    }

    return 0;
}
