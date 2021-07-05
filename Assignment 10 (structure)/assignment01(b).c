#include<stdio.h>

struct Employee{
    char empid[20], empname[20], empaddress[20], empcontact[15], empdob[15], empdesignation[15];
    float empsalary;
};
int main(){
    struct Employee employee;
    printf("Enter the employee's id : ");
    scanf("%s",&employee.empid);
    printf("Enter the employee's name : ");
    scanf("%s",&employee.empname);
    printf("Enter the employee's address : ");
    scanf("%s",&employee.empaddress);
    printf("Enter the employee's contact number : ");
    scanf("%s",&employee.empcontact);
    printf("Enter the employee's dob (20xx-xx-xx) : ");
    scanf("%s",&employee.empdob);
    printf("Enter the employee's designation (post) : ");
    scanf("%s",&employee.empdesignation);
    printf("Enter the employee's salary : ");
    scanf("%f",&employee.empsalary);
    printf("Employee detail\n");
    printf("ID\t\tName\t\tAddress\t\tContact\t\tDOB\t\tDesignation\t\tSalary\n");
    printf("%s\t%s\t\t%s\t%s\t%s\t\t%s\t\t%f\n",employee.empid,employee.empname,employee.empaddress,employee.empcontact,employee.empdob,employee.empdesignation,employee.empsalary);
    return 0;
}