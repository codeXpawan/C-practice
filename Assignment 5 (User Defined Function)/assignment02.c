//2.WAP to swap two numbers using function. 
#include<stdio.h>
int swap(int x);

int main()
{
	int a, b;
	printf("Enter first number (let a): ");
	scanf("%d",&a);
	printf("Enter second number (let b): ");
	scanf("%d",&b);
	printf("The numbers are swaped. \na = %d \n b = %d",swap(b),swap(a));
	return 0;
}

int swap(int x)
{
	return x;
}