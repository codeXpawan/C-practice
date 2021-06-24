//3)WAP to calculate the sum of cube of number from 1 to 100.
#include<stdio.h>

int main()
{
    int i, sum=0;
    while(i!=100)
    {
        sum = sum + i*i*i;
        i++;
    }
    printf("The sum  of cube of numbers from 1 to 100 is %d",sum);
    return 0;
}