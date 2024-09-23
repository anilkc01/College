#include <stdio.h>

void new(int *s);

int main(){
    int a;
    int *ptr = &a;
    printf("Enter the salary : ");
    scanf("%d", ptr);
    
    printf("Original Salary %d\n", *ptr);

    new(ptr);

    printf("new salary %d\n",*ptr);
}

void new(int *s){
    *s *= 2;
}