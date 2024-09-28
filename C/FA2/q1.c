/*
1. WAP to swap the variable
    A = 10, B = 20
    To
    A = 20, B = 10
*/

#include<stdio.h>

int main (){
    int a = 10;
    int b = 20;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    int  temp = a;
    a = b;
    b= temp;
    
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
}

