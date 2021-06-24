//1.WAP to find power of any number using recursion.
#include<stdio.h>

int power(int x, int y)
{
    if (y == 1)
     return x;
    else
     return x * power(x,y-1);
}
int main()
{
    int num, pow;
    printf("Enter the number and power:");
    scanf("%d %d",&num,&pow);
    printf("The required result is %d",power(num, pow));

    return 0;
}