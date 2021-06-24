//16)WAP to read a number and reverse it.
#include<stdio.h>

int main()
{
    int n, i, a, sum = 0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i>0;i++)
    {
        a = n%10;
        sum = sum*10 + a;
        n = n/10;
        if(n == 0)
        break;

    }
    printf("The reverse number is : %d",sum);

    return 0;
}