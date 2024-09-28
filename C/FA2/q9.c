/*
9. WAP to check if number is prime or not.
*/
#include <stdio.h>

int is_prime(int, int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num, num / 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

int is_prime(int num, int div) {
   
    if (num <= 1) return 0; 
    
    if (div == 1) return 1; 
    if (num % div == 0) return 0;
    
    return is_prime(num, div - 1);
}
