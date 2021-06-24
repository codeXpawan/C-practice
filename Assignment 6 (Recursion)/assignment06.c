//6.WAP to find factorial of any number using recursion.
#include<stdio.h>

int fac(int x)
{
    if (x == 1)
    {
        return x;
    }
    else
      return x * fac(x-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fac(n));

    return 0;
}