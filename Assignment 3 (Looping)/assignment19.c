//19)WAP to find the sum of series : 1+11+111+1111+......+n
#include<stdio.h>

int main()
{
    int n, i, z, sum = 0, m = 0;

    printf("Enter the value of nth series:");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for (z = i;z>0;z--)
        {
            sum = sum*10 + 1;
        }
        m = m + sum; 
    }
    printf("The sum of the series is :%d",m);

    return 0;
}