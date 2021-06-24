//7.WAP to reverse a given number using function.
#include<stdio.h>
int rev(int x);

int main()
{
	int n, a;
	printf("Enter the number: ");
	scanf("%d",&n);
	a = rev(n);
	printf("\nThe reverse of the number is %d",a);
	return 0;
}

int rev(int x)
{
	int i, b, sum = 0;
	for(i = 1;i>0;i++)
	{
		b = x % 10;
		sum = sum * 10 + b;
		x = x/10;
		if (x == 0)
		break;
	}
	return sum;
}