/*
3. WAP to print Fibonacci series using recursion.
*/
#include<stdio.h>

void getfib(int, int, int);
int main(){
    int count;
    int isValid;

    do{
        printf("Enter the number of Fibonacci series you want to print : ");
        isValid = scanf("%d", &count);

        if(!isValid){
            printf("Invalid User Input! \n");
            while(getchar() != '\n');
        } 
    }while(!isValid);

    int a = 0;
    int b = 1;

    printf("%d ", a);
    printf("%d ", b);

    getfib(a,b,count-2);
}

void getfib(int a, int b, int count){
    if(count >= 0){
        printf("%d ",a+b);
        getfib(b,a+b,--count);
    }
}