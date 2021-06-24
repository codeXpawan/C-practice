//12.WAP  to check whether a number is a prime number or not using the function.
#include<stdio.h>

int prime(int x);

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    a = prime(a);
    if(a == 1)
    printf("It's a Prime number.");
    else 
    printf("It's not a Prime number.");

    return 0;
}
int prime(int x)
{
    int a, b = x, c = 0;
    for(x = x-1;x>1;x--)
    {
        a = b % x;
        if ( a == 0)
        {
            c = 1;
            break;
        }
    }

    return c;
}