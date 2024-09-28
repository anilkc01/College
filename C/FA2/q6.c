/*
6. WAP to print sum of all natural numbers using recursion
*/

#include<stdio.h>

int sum(int);

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The sum of Natural numbers up to %d is %d \n", num, sum(num));
}

int sum(int a){
    if(a == 1){
        return a;
    }
    
    return(a+sum(a-1));
}