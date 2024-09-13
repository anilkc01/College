/*
WAP to calculate the total marks, average, and percentage of 5 subjects
Input marks of 5 subjects.
Calculate:
Total = Sum of marks.
Average = Total / 5.
Percentage = (Total / Maximum Marks) * 100.
*/
#include <stdio.h>

#define MAX_MARKS 500  // Assuming each subject is out of 100 marks

int main() {
    float marks[5];
    float total = 0.0, average, percentage;
    int isValid;

    // ask for 5 different marks
    for (int i = 0; i < 5; i++) {
        do {
            printf("Enter the marks for subject %d (0-100): ", i + 1);
            isValid = scanf("%f", &marks[i]);

            // Check if input is valid and within the range
            if (isValid != 1 || marks[i] < 0 || marks[i] > 100) {
                printf("Invalid input! Marks must be a number between 0 and 100.\n");
                while (getchar() != '\n');
            }
        } while (isValid != 1 || marks[i] < 0 || marks[i] > 100);

        total += marks[i];
    }

    average = total / 5;
    percentage = (total / MAX_MARKS) * 100;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
