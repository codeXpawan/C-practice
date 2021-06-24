//6.WAP to convert a given lowercase letter to uppercase using function.
#include<stdio.h>
int low(int x);

int main()
{
	char a, b;
	printf("Enter an alphabet: ");
	scanf("%c",&a);
	b = low(a);
	printf("The uppercase alphabet is %c",b);
	return 0;
}

int low(int x)
{
	x -= 32;
	return x;
}