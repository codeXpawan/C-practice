/*8.WAP to read record of 10 Students(name, rollno, marks) and store in a file “ioe.txt”.
  Print all the record of students who obtained greater or equals to 40 marks.
*/
#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int roll, marks;
}s[10];
int main(){
    FILE *fptr = fopen("ioe.txt","w");
    int n, i;
    if(fptr == NULL){
        printf("Error....");
        exit(1);
    }
    printf("How many record you want to add? (max 10): ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Student %d\n",i+1);
        printf("Enter the student's name : ");
        scanf("%s",s[i].name);
        printf("Enter the student's roll : ");
        scanf("%d",&s[i].roll);
        printf("Enter the student's marks : ");
        scanf("%d",&s[i].marks);
        fprintf(fptr,"%s %d %d\n",s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fptr);
    fptr = fopen("ioe.txt","r");
    if (fptr == NULL){
        printf("Error...");
        exit(1);
    }
    i = 0;
    while(fscanf(fptr,"%s%d%d\n",s[i].name, &s[i].roll, &s[i].marks) != EOF){
        if(s[i].marks >=40)
        printf("Name = %s\tRoll No. = %d\tMarks = %d\n",s[i].name, s[i].roll, s[i].marks);
        i++;
    }
}