/*
    4. Write a C program that finds the highest score in an array of integer marks.
*/

#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int highest = 0;
    
    for(int i = 0; i<5; i++){
        printf("Enter the value for index %d : ",i);
        scanf("%d",&a[i]);
        highest = a[i] > highest ? a[i] : highest;
    }

    printf("The highest you entered is %d\n", highest);
}