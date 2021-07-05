#include<stdio.h>

struct Item{
    char itcode[20],itname[20];
    float itprice;
};
int main(){
    struct Item item;
    printf("Enter the item's code : ");
    scanf("%s",&item.itcode);
    printf("Enter the item's name : ");
    scanf("%s",&item.itname);
    printf("Enter the item's price : ");
    scanf("%f",&item.itprice);
    printf("\nCode\t\tName\t\tPrice\n");
    printf("%s\t\t%s\t\t%.2f",item.itcode,item.itname,item.itprice);
    return 0;
}