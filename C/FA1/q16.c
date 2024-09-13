/*
16. Check Positive, Negative, or Zero
    Description: Write a program that reads an integer and checks 
    whether it is positive, negative, or zero using nested if statements.
*/

#include<stdio.h>

int main(){
        int input;

        int ret;
        do{
            printf("Enter the number : ");
            ret = scanf("%d",&input);

            if(ret!=1){
                printf("Invalid Input !!\n");
                while (getchar() != '\n');
                
            }
        }while(!ret);

        if(input < 0){
            printf("Input is Negative Number.\n");
        }
        else if(input > 0){
            printf("Input is Positive Number.\n");
        }
        else{
            printf("Input is 0.\n");
        }

        return 0;
}