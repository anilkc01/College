/*
17.: Find the Oldest Person 
     Description: Write a program to determine the oldest among three people based on their ages using nested if statements.
*/

#include<stdio.h>

int main(){

    int age[3];

    for(int i = 0; i < 3; i++){
        int ret;
        do{
            printf("Enter the age of person %d: ", i+1);
            ret = scanf("%d",&age[i]);

            if(!ret){
                printf("Invalid input !!\n");
                while (getchar() != '\n');
            }
        }while(!ret);
    }

    if(age[0] > age[1] && age[0] > age[2]){
        printf("Person 1 is the oldest\n");
    }
    else if (age[1] > age[2]){
        printf("Person 2 is the oldest\n");
    }else{
        printf("Person 3 is the oldest\n");
    }
}