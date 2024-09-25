#include<stdio.h>
int reverse(int);
int main(){

    int num;
    printf("Enter the number : ");

    scanf("%d", &num);
   
    if(num == reverse(num)){
        printf("Number is Palindrome !\n");
    }
    else{
        printf("Number is not Palindrome !\n");
    }

    return 0;

}

int reverse(int num){
    int nume = num;
    int new = 0;
    while(nume>0){
        new = new*10 + nume%10;
        nume = nume/10;
    }

    return new;
    
}