//6)WAP to print all the prime numbers between 2 to 500.
#include<stdio.h>

int main()
{
    int i,j, f;
    for(i=2;i<=500;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f == 0)
            printf("%d\n",i);

    }

    return 0;
}