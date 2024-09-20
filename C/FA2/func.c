#include <stdio.h>

int add(int,int);
int sub(int,int);
int mult(int,int);

int main(){
    int first,second,choice;
    int result;
    char c = 'y';

    do{
        printf("Choose\n");
        printf("1.Addition 2.Subtraction 3.Multiplication\n");
        scanf("%d",&choice);
        
        if(choice <= 3 && choice > 0 ){
            printf("Enter first number: ");
            scanf("%d",&first);
            printf("Enter second number: ");
            scanf("%d",&second);
        }else{
            printf("Invalid choice");
        }

        if(choice == 1){
            result = add(first, second);
        }
        else if (choice == 2){
            result = sub(first, second);
        }
        else if (choice == 3){
            result = mult(first, second);
        }

        printf("Result : %d \n",result);

        printf("Do you want to do it again? (y/n) : ");
        while(getchar() != '\n');
        scanf("%c",&c);

    } while(c != 'n');
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mult(int a, int b){
    return a*b;
}