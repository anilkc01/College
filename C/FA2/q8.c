/*
8. WAP to swap three variables without using a temporary variable:
*/
#include<stdio.h>

int main(){
    int a = 1, b = 2, c = 3;

    printf("Before : a = %d, b = %d, c = %d \n",a,b,c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After : a = %d, b = %d, c = %d \n",a,b,c);

    return 0;
}