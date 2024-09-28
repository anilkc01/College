/*
7. WAP to print factorial of all natural numbers using recursion
*/

#include<stdio.h>

int factorial(int);

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The Factorial of %d is %d \n", num, factorial(num));
}

int factorial(int a){
    if(a == 2){
        return a;
    }

    return(a * factorial(a-1));
}