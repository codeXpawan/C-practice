#include<stdio.h>

struct Author{
    char autid[20], autname[20], autcontact[15], autemail[10], autgender[10];
};
int main(){
    struct Author author;
    printf("Enter the author's id : ");
    scanf("%s",&author.autid);
    printf("Enter the author's name : ");
    scanf("%s",&author.autname);
    printf("Enter the author's contact : ");
    scanf("%s",&author.autcontact);
    printf("Enter the author's email : ");
    scanf("%s",&author.autemail);
    printf("Enter the author's gender : ");
    scanf("%s",&author.autgender);
    printf("\nID\t\t\tName\t\tContact number\t\tEmail\t\tGender\n");
    printf("%s\t\t    %s\t\t%s\t\t  %s\t%s\n",author.autid,author.autname,author.autcontact,author.autemail,author.autgender);
    return 0;
}