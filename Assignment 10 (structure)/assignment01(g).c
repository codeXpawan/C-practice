#include<stdio.h>

struct Account{
    char acid[20], acname[20], acno[30], actype[20];
    float acbal;
};
int main(){
    struct Account account;
    printf("Enter the Account id : ");
    scanf("%s",&account.acid);
    printf("Enter the account name : ");
    scanf("%s",&account.acname);
    printf("Enter the account number : ");
    scanf("%s",&account.acno);
    printf("Enter the account type : ");
    scanf("%s",&account.actype);
    printf("Enter the account balance : ");
    scanf("%f",&account.acbal);
    printf("\nID\t\t\tName\t\tNumber\t\tType\t\tbalance\n");
    printf("%s\t\t    %s\t\t%s\t\t%s\t\t%.3f\n",account.acid,account.acname,account.acno,account.actype,account.acbal);
    return 0;
}