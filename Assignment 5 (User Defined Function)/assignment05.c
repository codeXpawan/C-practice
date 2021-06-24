//5.WAP to find the factorial of a given number using function.
#include<stdio.h>
int factorial(int x);

int main()
{
	int n, a;
	printf("Enter the number: ");
	scanf("%d",&n);
	a = factorial(n);
	printf("\nThe factorial of the number is %d",a);
	return 0;
}

int factorial(int x)
{
	int mul = 1;
	for(x;x>0;x--)
	{
		mul = mul * x;
	}
	return mul;
}