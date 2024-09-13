/*
11. WAP to Print whether the year is a leap year or not.
*/

#include <stdio.h>

int main() {
    int year;
    int validInput;

    // takes valid user input 
    do {
        printf("Enter a year: ");
        validInput = scanf("%d", &year);

        if (validInput != 1 || year < 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (validInput != 1 || year < 0);

    //  leap year is (divisible by 4 but not by 100) OR divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
