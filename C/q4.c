/*
4. WAP to calculate the area of circle and calculate the volume of cylinder given its radius and height
    π = 3.14159
    Area of Circle: Calculated using the formula π * r^2.
    Volume of Cylinder: Calculated using the formula π * r^2 * h.
*/
#include <stdio.h>

#define PI 3.14159

int main() {
    float r, h;
    float area, volume;
    int isValid;

    // ask for valid readius
    do {
        printf("Enter the radius: ");
        isValid = scanf("%f", &r);
        
        if (isValid != 1 || r <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || r <= 0);

    // ask for valid height
    do {
        printf("Enter the height: ");
        isValid = scanf("%f", &h);
        
        if (isValid != 1 || h <= 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
        }
    } while (isValid != 1 || h <= 0);

    area = PI * r * r;
    volume = PI * r * r * h;

    // Output the results
    printf("The area of the circle with radius %.2f is: %.2f\n", r, area);
    printf("The volume of the cylinder with radius %.2f and height %.2f is: %.2f\n", r, h, volume);

    return 0;
}
