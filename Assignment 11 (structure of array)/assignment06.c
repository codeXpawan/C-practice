/*6.Define a structure named Student having members name and rollno. WAP to read record of 10 students.
   Sort the students record in ascending order according to their roll numbers.
*/
#include<stdio.h>
#include<string.h>

struct Student{
   char name[20];
   int roll;
}s1[10],s2[10];
int main(){
   int i,j,n;
   printf("Enter the value you want to record (max 10): ");
    scanf("%d",&n);
   for(i=0;i<n;i++){
      printf("Enter the student's name : ");
      scanf("%s",&s1[i].name);
      printf("Enter the roll no. : ");
      scanf("%d",&s1[i].roll);
   }
   for(i=0;i<n;i++){
      for(j=i;j<n;j++){
         if(s1[i].roll>s1[j].roll){
            strcpy(s2[i].name,s1[i].name);
            strcpy(s1[i].name,s1[j].name);
            strcpy(s1[j].name,s2[i].name);
            s2[i].roll = s1[i].roll;
            s1[i].roll = s1[j].roll;
            s1[j].roll = s2[i].roll;
         }
      }
   }
   printf("Students record in ascending order acc. to their roll numbers.\n");
   printf("Name\t\tRoll No.\n");
   for(i=0;i<n;i++)
   printf("%s\t\t%d\n",s1[i].name,s1[i].roll);
   return 0;
}