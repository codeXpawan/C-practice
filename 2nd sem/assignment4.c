#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10],address[20],num[15];
	int roll;
};
int main(){
	struct student data;
	FILE *ptr;
	int n,i;
	ptr = fopen("student.txt","w");
	if(ptr == NULL){
		printf("file doesn't open");
		exit(1);
	}
	printf("How many data you want to add:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name:");
		scanf("%s",data.name);
		printf("Enter the address:");
		scanf("%s",data.address);
		printf("Enter the mobile number:");
		scanf("%s",data.num);
		printf("Enter the roll no:");
		scanf("%d",&data.roll);
		fprintf(ptr,"%s %s %s %s",data.name,data.address,data.num,data.roll);
	}
	fclose(ptr);
	ptr = fopen("student.txt","r");
	if(ptr == NULL){
		printf("Error while opening the file");
		exit(1);
	}
	while(fscanf(ptr,"%s %s %s %d",data.name,data.address,data.num,&data.roll) != EOF){
		printf("%s %s %s %d",data.name,data.address,data.num,data.roll);
	}
	return 0;
}
