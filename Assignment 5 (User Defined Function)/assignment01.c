//1.WAP to find the square of any number using the function.
#include<stdio.h>
float sq(float x);

int main()
{
	float n;
	printf("Enter the number: ");
	scanf("%f",&n);
	printf("The square of the given number is %.3f",sq(n));
	return 0;
}

float sq(float x)
{
	return x*x;
}