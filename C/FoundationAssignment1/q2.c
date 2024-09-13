/*
2. WAP to convert Celsius (Centigrade degree temperature to Fahrenheit)
Fahrenheit = (Celsius * 9 / 5) + 32;
*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int ret;

    // ask until user input valid value
    do {
        printf("Enter a valid temperature in Celsius: ");
        ret = scanf("%f", &celsius);
        
        // check if the input is valid 
        if (ret != 1) {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); 
        }
    } while (ret != 1);
   
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f ℃ is equal to %.2f ℉.\n", celsius, fahrenheit);

    return 0;
}
