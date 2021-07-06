//3.Define a structure:Name(fname, mname, lastname)Person(age, contact, address)
//  WAP to nest the structure Name within structure Person and read the record of 10 persons and display it.
#include<stdio.h>
#include<string.h>

struct Name{
    char fname[10], mname[10], lname[10];
};
struct Person{
    int age;
    char contact[15], address[20];
    struct Name name;
}p[10];
int main(){
   int i,n;
   printf("Enter the value you want to record (max 10): ");
    scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter the person's first name : ");
       scanf("%s",&p[i].name.fname);
       printf("Enter the person's middle name : ");
       scanf("%s",&p[i].name.mname);
       printf("Enter the person's last name : ");
       scanf("%s",&p[i].name.lname);
       printf("Enter the person's age : ");
       scanf("%d",&p[i].age);
       printf("Enter the person's address : ");
       scanf("%s",&p[i].address);
       printf("Enter the person's contact number : ");
       scanf("%s",&p[i].contact);
   }
    printf("Person's Details:");
    for(i=0;i<20;i++) printf("-");
    printf("\nFirst name\tMiddle name\tLast name\tAge\tAddress\t\tContact number\n");
   for(i=0;i<n;i++){
       printf("%s\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\n",p[i].name.fname,p[i].name.mname,p[i].name.lname,p[i].age,p[i].address,p[i].contact);
   }
   return 0;
}