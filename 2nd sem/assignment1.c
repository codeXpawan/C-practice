#include <stdio.h>

struct yearlyexpenditure{
	float yearlyexp;
};
int main(){
	struct yearlyexpenditure exp[10];
	int n,i,from,to;
	float monthlyavg,yearavg;
	printf("How many data you want to add:\n");
	scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("Enter the yearly expenditure of year %d\n",i+1);
		scanf("%f",&exp[i].yearlyexp);
	}
	printf("The average expenditure of each month of each year:\n");
	for(i = 0; i<n; i++){
		monthlyavg = exp[i].yearlyexp/12;
	       printf("year %d = %.3f\n",i+1,monthlyavg);	
	}
	printf("Enter the range of year to find it's average expenditure from:");
	scanf("%d",&from);
	printf("\nto:");
	scanf("%d",&to);
	for(i=from-1;i<to;i++){
		yearavg += exp[i].yearlyexp;
	}
	printf("The average expenditure of given range is: %.3f",yearavg/i);
	return 0;
}
