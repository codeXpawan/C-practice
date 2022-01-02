#include <stdio.h>
#include<stdlib.h>

struct data{
	char name[10];
	int marks;
}student;
int main(){
	int n;
	FILE *ptr;
	ptr = fopen("student.txt","w");
	if(ptr == NULL){
		printf("Error while opening file");
		exit(1);
	}
	printf("How many records you want to add:");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
	printf("Enter the name:");
	scanf("%s",student.name);
	printf("marks obtained:");
	scanf("%d",&student.marks);
	fprintf(ptr,"%s%d\n",student.name,student.marks);
	}
	fclose(ptr);
	ptr = fopen("student.txt","r");
	if(ptr = NULL){
		printf("Error while opening file.");
		exit(1);
	}
	while(fscanf(ptr,"%s%d\n",student.name,&student.marks)!=EOF){
	printf("Student's Name-%s Marks Obtained-%d",student.name,student.marks);
	}
	fclose(ptr);
	return 0;
}
