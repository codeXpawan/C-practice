#include<stdio.h>

struct Customer{
    char cusid[20], cusname[20], cusaddress[20], cuscontact[15];
};
int main(){
    struct Customer customer;
    printf("Enter the customer's id : ");
    scanf("%s",&customer.cusid);
    printf("Enter the customer's name : ");
    scanf("%s",&customer.cusname);
    printf("Enter the customer's address : ");
    scanf("%s",&customer.cusaddress);
    printf("Enter the customer's contact number : ");
    scanf("%s",&customer.cuscontact);    
    printf("\nID\t\t\tName\t\tAddress\t\t\tContact number\n");
    printf("%s\t\t    %s\t\t%s\t\t%s\n",customer.cusid,customer.cusname,customer.cusaddress,customer.cuscontact);
    return 0;
}