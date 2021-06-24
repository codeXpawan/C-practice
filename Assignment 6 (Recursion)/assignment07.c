//7.WAP to generate nth Fibonacci term using recursion.
#include<stdio.h>

int a = 0, b = 1, sum;
int fab(int x)
{
    if (x != 2)
    {
        sum = a + b;
        a = b;
        b = sum;
        fab(x-1);
    }
    else
      return a + b;
    return sum;  
}
int main()
{
    int n;
    printf("Enter the Fibonacci term:");
    scanf("%d",&n);
    printf("The %dth Fibonacci number is %d",n,fab(n));

    return 0;
}