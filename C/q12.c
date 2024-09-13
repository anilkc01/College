/*
12. 12. Write a program to classify a person’s weight status based on their BMI. The categories are:
    bmi = weight / (height * height);
    Underweight: BMI < 18.5
    Normal weight: 18.5 ≤ BMI < 24.9
    Overweight: 25 ≤ BMI < 29.9
    Obese: BMI ≥ 30
*/
#include <stdio.h>

int main() {
    float weight, height, bmi;
    int validInput;

    do {
        printf("Enter your weight (in kg): ");
        validInput = scanf("%f", &weight);

        // Check if input is valid
        if (validInput != 1 || weight <= 0) {
            printf("Invalid input! \n");
            while (getchar() != '\n');  
        }
    } while (validInput != 1 || weight <= 0);

    // Input validation for height
    do {
        printf("Enter your height (in meters): ");
        validInput = scanf("%f", &height);

        if (validInput != 1 || height <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');  
        }
    } while (validInput != 1 || height <= 0);

    // Calculate BMI
    bmi = weight / (height * height);

    // Classify based on BMI
    if (bmi < 18.5) {
        printf("Your BMI is %.2f: Underweight\n", bmi);
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Your BMI is %.2f: Normal weight\n", bmi);
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Your BMI is %.2f: Overweight\n", bmi);
    } else {
        printf("Your BMI is %.2f: Obese\n", bmi);
    }

    return 0;
}
