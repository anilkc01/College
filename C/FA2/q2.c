#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int a = 10;
    int b = 20;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    swap(&a, &b);

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}