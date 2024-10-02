/*
    3. WAP to read two array of size 5 and store sum of these array on third array
*/

#include<stdio.h>

int main(){
    int first[5],second[5],third[5];

    for(int i = 0; i < 5; i++){
        printf("Enter the value for index %i of first array : ", i);
        scanf("%d",&first[i]);

         printf("Enter the value for index %i of Second array : ", i);
        scanf("%d",&second[i]);

        third[i] = first[i] + second[i];
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("Value of index %d of third arrray is %d\n",i,third[i]);
    }

    return 0;
}