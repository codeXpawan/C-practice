//5.WAP to find sum of digits of a given number using recursion.
#include<stdio.h>

int rev(int x)
{
    if (x < 10)
    {
        return x;
    }
    else
      return x%10 + rev(x/10);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The reverse number is %d",rev(n));

    return 0;
}