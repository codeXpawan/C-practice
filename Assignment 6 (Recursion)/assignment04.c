//4.WAP to find reverse of any number using recursion.
#include<stdio.h>

int sum =0, rem;
int rev(int x)
{
    if (x>0)
    {
        rem = x%10;
        sum = sum * 10 + rem;
        rev(x/10);
    }
    else
      return sum;
    return sum;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The reverse number is %d",rev(n));

    return 0;
}