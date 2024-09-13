/*
15. Write a program to determine if a person can rent a car based on their age and driving license status.
    A person must be at least 21 years old and have a valid driving license.
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int age;
    char licenseStatus[4]; // "yes" or "no"
    bool hasLicense;

    // Input validation for age
    do {
        printf("Enter your age: ");
        if (scanf("%d", &age) != 1 || age < 0) {
            printf("Invalid input! \n");
            while (getchar() != '\n');  
        } else {
            break;
        }
    } while (1);

    // Clear buffer after integer input
    while (getchar() != '\n');

    // Input for driving license status
    do {
        printf("Do you have a valid driving license? (yes/no): ");
        if (scanf("%3s", licenseStatus) != 1 || (strcmp(licenseStatus, "yes") != 0 && strcmp(licenseStatus, "no") != 0)) {
            printf("Invalid input! Please enter 'yes' or 'no'.\n");
            while (getchar() != '\n');  // Clear buffer
        } else {
            break;
        }
    } while (1);

    hasLicense = (strcmp(licenseStatus, "yes") == 0);

    if (age >= 21 && hasLicense) {
        printf("You are eligible to rent a car.\n");
    } else {
        printf("You are not eligible to rent a car.\n");
    }

    return 0;
}
