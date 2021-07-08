/*2.Define a structure name Employee having its member empid, name, address, and salary.
   WAP to read record of 10 employees and

   (a)Display record of all employees who live in 'DHARAN'.
   (b)Display record of all employees who does not live in 'DHARAN'.
   (c)Display record of all employees whose salary ranges between 15000 to 20000.
   (d)Display record of all employees after increasing the salaries of all employees by 10%.
   (e)Increase the salary by 10% of only those employees who lives in 'BIRATNAGAR' . 
    Display record of all employees.
*/
#include<stdio.h>
#include<string.h>

struct Employee{
    char id[20], name[20], address[20];
    float salary;
};
 char * lower(char[20]);
void main(){
    struct Employee emp[10];
    int i,n,j;
    printf("Enter the value you want to record (max 10): ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the employee's id : ");
        scanf(" %s",&emp[i].id);
        printf("Enter the employee's name : ");
        scanf(" %s",&emp[i].name);
        printf("Enter the employee's address : ");
        scanf(" %s",&emp[i].address);
        printf("Enter the employee's salary : ");
        scanf(" %f",&emp[i].salary);
    }
    printf("Record of all employees who lives in dharan :\n");
    printf("ID\t\tName\t\tAddress\t\tSalary\n");
    for(j=0;j<n;j++){
        for(i=0;i<strlen(emp[i].address);i++){
            if(emp[i].address[i]<90)
            emp[i].address[i] +=32;
        }
    }
    
    for(i=0;i<n;i++){
        if(strcmp(lower(emp[i].address),"dharan")==0){
            printf("%s\t\t%s\t\t%s\t\t%.3f\n",emp[i].id,emp[i].name,emp[i].address,emp[i].salary);
        }
    }
    printf("Record of all employees who doesn't live in dharan :\n");
    printf("ID\t\tName\t\tAddress\t\tSalary\n");

    for(i=0;i<n;i++){
        if(strcmp(lower(emp[i].address),"dharan") != 0 )
		{
            printf("%s\t\t%s\t\t%s\t\t%.3f\n",emp[i].id,emp[i].name,emp[i].address,emp[i].salary);
        }
    }
    printf("Record of all employees whose salary range from 15000-20000 :\n");
    printf("ID\t\tName\t\tAddress\t\tSalary\n");
    for(i=0;i<n;i++){
        if(emp[i].salary>=15000 && emp[i].salary<=20000){
            printf("%s\t\t%s\t\t%s\t\t%.3f\n",emp[i].id,emp[i].name,emp[i].address,emp[i].salary);
        }
    }
    printf("Record of all employees after increasing salary by 10%% :\n");
    printf("ID\t\tName\t\tAddress\t\tSalary\n");
    for(i=0;i<n;i++)
            printf("%s\t\t%s\t\t%s\t\t%.3f\n",emp[i].id,emp[i].name,emp[i].address,emp[i].salary + (0.1*emp[i].salary));
    printf("Record of all employees after increasing salary by 10%% who live in biratnagar :\n");
    printf("ID\t\tName\t\tAddress\t\tSalary\n");
    for(i=0;i<n;i++){
        if(strcmp(lower(emp[i].address),"biratnagar")==0)
        printf("%s\t\t%s\t\t%s\t\t%.3f\n",emp[i].id,emp[i].name,emp[i].address,emp[i].salary + (0.1*emp[i].salary));
    }
}
char * lower(char s[]){
    int i;
    for(i=0;i<strlen(s);i++){
        if(s[i]<96)
        s[i] += 32;
    }
    return s;
}