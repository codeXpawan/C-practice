//18)WAP a program to check wheather a given number is palindrome or not.
#include<stdio.h>

int main()
{
    int n, i, z, a, sum = 0;

    printf("Enter the number:");
    scanf("%d",&n);

    z = n;
    for(i=1;i<10;i++)
    {
        a = n%10;
        sum = sum*10 + a;
        n = n/10;
        if(n == 0)
        break;

    }

    if (z == sum)
    printf("It's a palindrome number.");

    else
    printf("\nIt's not a palindrome number.");

    return 0;
}