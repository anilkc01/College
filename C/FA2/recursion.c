#include<stdio.h>

int sum(int a);

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    printf("sum %d\n", sum(a));

}

int sum(int a){
    if(a == 1){
        return a;
    }
    return(a+sum(a-1));
}