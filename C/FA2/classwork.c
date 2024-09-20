#include<stdio.h>

int main(){
    int h;

    printf("Enter the Height : ");
    scanf("%d",&h);

    for(int i = 1; i <= h; i++){
         for(int j = 0; j < i; j++){
            printf("*");
          }
          printf("\n");
    }
    printf("\n \n");
    
    for(int i = 1; i <= h; i++){
         for(int j = 1; j <= h; j++){
            if(j<=h-i){
                printf(" ");
            }
            else{
                printf("*");
            } 
        }
        printf("\n");
    }
}