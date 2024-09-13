#include<stdio.h>

int deposit();
int withdraw(int balance);

int main(){
    int balance  = 10000;

    printf("Welcome to Softwarica Bank !\n Please choose the options below(1-3)\n 1. Add Fund/Deposit\n 2. Withdraw Fund\n 3. Check Balance\n");
    
   int opt;
   int ret;
    do {
        printf("Enter your selection: ");
        ret = scanf("%d", &opt);
        
        if (ret != 1) {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); 
        }
    } while (ret != 1);

    if(opt == 1){
        balance += deposit();
        printf("New Balance %d\n", balance);
    }
    else if( opt == 2){
        balance -= withdraw(balance);
        printf("New Balance %d\n", balance);
    }
    else if(opt == 3){
        printf("Your Balance %d\n", balance);
    }

    return 0;
}

int deposit(){
    int amt = 0;
    int ret;
    do{
       printf("Enter the amount you want to deposit : ");
        ret = scanf(" %d",&amt);

        if (ret != 1) {
            printf("Invalid amount !\n");
            while (getchar() != '\n'); 
        }

    }while(ret != 1);

    return amt;
}

int withdraw(int balance){
   int amt = 0;
   int ret;
    do{
       printf("Enter the amount you want to withdraw : ");
        ret = scanf(" %d",&amt);

        if (ret != 1 ) {
            printf("Invalid amount !\n");
            while (getchar() != '\n'); 
        }
        else if (amt>balance)
        {
            printf("Insufficient amount !\n");
            while (getchar() != '\n'); 
        }
        

    }while(ret != 1 || amt > balance);

    return amt;
}