//3.WAP to check a given number is even or odd using the function.
#include<stdio.h>
int oe(int x);

int main()
{
	int n, a, b;
	printf("Enter the number: ");
	scanf("%d",&n);
	oe(n);
	return 0;
}

int oe(int x)
{
	if (x%2 == 0)
	printf("It's Even.");
	else
	printf("It's Odd.");
}