/*
10. Write a Program to check if a character is a vowel
*/
#include <stdio.h>
#include <ctype.h>  // For the tolower() function

int main() {
    char ch;
    
    // Input the character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert to lowercase if user input UpperCase
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}


