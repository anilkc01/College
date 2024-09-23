#include<stdio.h>

int sum(int);
int factorial(int);

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Sum : %d\n", sum(a));
    printf("Factorial : %d\n", factorial(a));

}

int sum(int a){
    if(a == 1){
        return a;
    }
    return  a + sum(a-1);
}

int factorial(int a){
    if(a == 2){
        return a;
    }
    return a*factorial(a-1);

}