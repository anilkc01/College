/*
    2. WAP to read marks of 5 students calculate total marks and average marks
*/

#include<stdio.h>

int main(){

    int marks[5];
    int total = 0;

    for(int i = 0; i < 5; i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
        total += marks[i];
    }

    printf("Total : %d\n",total);
    printf("Average : %d\n", total/5);
}