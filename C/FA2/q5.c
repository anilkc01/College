/*
5. WAP to check if number is Armstrong or not.
*/
#include<stdio.h>
#include<math.h>

int getLength(int);
int main(){
    int inp;
    printf("Enter the number : ");
    scanf("%d", &inp);

    int length = getLength(inp);
    int sum = 0, temp = inp;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, length);
        temp /= 10;
    }

    if (sum == inp) {
        printf("%d is an Armstrong number.\n", inp);
    } else {
        printf("%d is not an Armstrong number.\n", inp);
    }

    return 0;
}

int getLength(int a){
    int temp = a;
    int length = 1;
    while(temp > 10){
        length++;
        temp /= 10;
    }
    return length;
}