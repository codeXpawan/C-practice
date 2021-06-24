//3.WAP to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>

int prod(int x)
{
    if (x == 1)
     return x;
    else
     return x + prod(x-1);
}
int main()
{
    int n;
    printf("Enter the upper limit:");
    scanf("%d",&n);
    printf("The required result is %d",prod(n));

    return 0;
}