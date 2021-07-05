#include<stdio.h>

struct Person{
    char pername[20], peraddress[20], percontact[15];
    int perage;
};
int main(){
    struct Person person;
    printf("Enter the person's name : ");
    scanf("%s",&person.pername);
    printf("Enter the person's age : ");
    scanf("%d",&person.perage);
    printf("Enter the person's address : ");
    scanf("%s",&person.peraddress);
    printf("Enter the person's contact number : ");
    scanf("%s",&person.percontact);
    printf("Person detail\n");
    printf("\nName\t\tAge\t\tAddress\t\t\tContact number\n");
    printf("%s\t\t%d\t\t%s\t\t%s\n",person.pername,person.perage,person.peraddress,person.percontact);
    return 0;
}