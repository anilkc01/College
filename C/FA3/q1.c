/*
    1. WAP to read an array and count total no of even and odd numbers
*/

#include<stdio.h>

int main(){
    int a[10];
    int even = 0;
    int odd = 0;

    for(int i = 0; i < 10; i++){
        printf("Enter the number for index %d : ", i);
        scanf("%d",&a[i]);
        a[i]%2 == 0 ? even++ : odd++;
    }

    printf("Even count : %d\n", even);
    printf("Odd count : %d\n", odd);
}