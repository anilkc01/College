/*
18: Electricity Bill Calculation
    Description: Write a program to calculate the electricity bill based on the following conditions:
    If units <= 100: rate is 5 per unit
    If units <= 200: rate is 10 per unit for units above 100
    If units > 200: rate is 15 per unit for units above 200
*/

#include<stdio.h>

int main(){
    int unit, ret;

    do{
        printf("Enter the unit consumed : ");
        ret = scanf("%d", &unit);

        if(!ret || unit <= 0){
            printf("Invalid input !\n");
            while(getchar() != '\n');
        }

    } while(!ret);

    if(unit <= 100){
        printf("Your bill amount : %d\n", unit*5);
    }
    else if(unit <= 200){
        printf("Your bill amount : %d\n", (100 * 5) + (unit-100)*10);
    }
    else{
        printf("Your bill amount : %d\n", (100 * 5) + (100 * 10) + (unit-200)*15);
    }
    

}