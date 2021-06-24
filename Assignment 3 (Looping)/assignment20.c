//20)WAP to read +ve integer and determine and print its binary equivalent.
#include<stdio.h>

int main()
{
    int n, i, sum = 0, x =1;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i>0;i++)
    {
       sum = sum + x * (n%2);
        n = n/2;
        x = x * 10;


        if (n == 0)
        break;
    }

    printf("The binary form is :%d",sum);

    return 0;
}