#include<stdio.h>

void getfib(int, int, int);
int main(){
    int count = 10;

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