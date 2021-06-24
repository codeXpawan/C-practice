//2)WAP to calculate the sum of numbers from 1 to 100.
#include<stdio.h>

int main()
{
    int i, sum=0;
    while(i!=100)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum from 1 to 100 is %d",sum);
    return 0;
}