//1.Define a structure named Student having members name, rollno and marks in 5 subjects. 
//  WAPto read record of 10 students. Calculate total marks and percentage of each student and print them.
#include<stdio.h>
#include<string.h>

struct Student{
    char name[20],roll[10];
    float marks[5];
};
int main(){
    struct Student s[10];
    int i,n;
    float sum[5];
    printf("Enter the value you want to record (max 10): ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum[i] = 0;
        printf("Enter the student's name : ");
        scanf(" %[^\n]s",&s[i].name);
        printf("Enter the student's roll no. : ");
        scanf("%d",&s[i].roll);
        for(int j=0;j<5;j++){
            printf("Enter the marks in subject %d : ",j);
            scanf("%f",&s[i].marks[j]);
            sum[i] += s[i].marks[j];
        }
    }
    printf("Student name\t\tTotal marks\t\tPercentage\n");
    for(i=0;i<n;i++){
        printf("%s\t\t%.2f\t\t\t%.2f%%\n",s[i].name,sum[i],(sum[i]/500)*100);
    }
    return 0;
}