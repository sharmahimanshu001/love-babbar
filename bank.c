#include<stdio.h>
struct xyz
{
    int x,amount;
    int balance;
    
};
int main()
{   
    int i,j,k,choice;
    struct xyz o;
    o.balance=50000;
    do{
        printf("\nPress 1 for withdraw");
        printf("\nPress 2 for deposit");
        printf("\npress 3 for account balance");
        printf("\npress 4 for exit");
        printf("\nEnter Choice");scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter amount");scanf("%d",&o.x);
            o.amount=o.balance-o.x;
            printf("balance=%d",o.amount);
            break;
            case 2:printf("\nEnter amount");scanf("%d",&o.x);
            o.amount =o.balance+o.x;
            printf("balance=%d",o.amount);
            break;
            case 3:
            printf("net balance=%d",o.balance);
            break;
            default:
            printf("Have a nice day");
        }
        
    } while(choice<4);
    system("pause");
}