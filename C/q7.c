/*
7. WAP to calculate the volume of a cylinder.
    Formula: Volume = π * radius^2 * height
*/

#include <stdio.h>

#define PI 3.14159

int main() {
    float r, h, volume;
    
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

    volume = PI * r * r * h;

    printf("The volume of the cylinder with radius %.2f and height %.2f is: %.2f\n", r, h, volume);

    return 0;
}
