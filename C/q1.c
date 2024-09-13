#include <stdio.h>

int main() {
    float length, width, area;

    // ask until the user input valid value of length
    do {
        printf("Enter the length : ");
        scanf("%f", &length);
        if (length <= 0) {
            printf("Invalid input!\n");
        }
    } while (length <= 0);

    // ask until the user input valid value of width
    do {
        printf("Enter the width : ");
        scanf("%f", &width);
        if (width <= 0) {
            printf("Invalid input! \n");
        }
    } while (width <= 0);

    
    area = 0.5 * length * width;

    
    printf("The area of the triangle is: %.3f\n", area);

    return 0;
}