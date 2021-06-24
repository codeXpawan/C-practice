//4.WAP to read a +ve integer and find the sum of digits using function.
#include<stdio.h>
int rev(int x);

int main()
{
	int n, a;
	printf("Enter the number: ");
	scanf("%d",&n);
	a = rev(n);
	printf("\nThe sum of the digit is %d",a);
	return 0;
}

int rev(int x)
{
	int i, b, sum = 0;
	for(i = 1;i>0;i++)
	{
		b = x % 10;
		sum += b;
		x = x/10;
		if (x == 0)
		break;
	}
	return sum;
}