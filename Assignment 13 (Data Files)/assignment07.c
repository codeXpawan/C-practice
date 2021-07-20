/*7.WAP to read to store Employees(id, name, address, salary) detail in a text file.
  Read data fromthe text file, sort them in ascending order of salary and store the sorted
  record in a binary file. Display the details of all employees.
*/
#include<stdio.h>
#include<stdlib.h>

struct employee{
  char name[20], address[20];
  int id;
  int salary;
}e1[10],temp;
int main(){
  FILE *ptr = fopen("employee.txt","w");
  int n, i, j;
  char c;
  if(ptr == NULL)
 {
  printf("File error!");
  exit(1);
 }
  printf("Enter the value of record's you want to add (max 10) : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Employee %d\n",i+1);
    printf("Enter the employee's id : ");
    scanf("%d",&e1[i].id);
    printf("Enter the employee's name : ");
    scanf("%s",e1[i].name);
    printf("Enter the employee's address : ");
    scanf("%s",e1[i].address);
    printf("Enter the employee's salary : ");
    scanf("%d",&e1[i].salary);
    fprintf(ptr,"%d\n%s\n%s\n%d\n",e1[i].id,e1[i].name,e1[i].address,e1[i].salary);
  }
  fclose(ptr);
   /* Reading file in binary read mode */
 ptr = fopen("employee.txt","r");
 if(ptr == NULL)
 {
  printf("File error!");
  exit(1);
 }

 /* Sorting */
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(e1[i].salary>e1[j].salary)
   {
    temp = e1[i];
    e1[i] = e1[j];
    e1[j] = temp;
   }
  }
 }
 i=0;
 /* Displaying sorted list */
 while(fscanf(ptr,"%d\n%s\n%s\n%d\n",&e1[i].id,e1[i].name,e1[i].address,&e1[i].salary) != EOF)
 {
    printf("Id = %d\tName = %s\tAddress = %s\tSalary = %d\n",e1[i].id, e1[i].name, e1[i].address, e1[i].salary);
    i++;
 }
 fclose(ptr);

 return 0;
}