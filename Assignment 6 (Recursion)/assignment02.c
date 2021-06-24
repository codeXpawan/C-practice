//2.WAP to find the product of two given numbers using recursion.
#include<stdio.h>

int prod(int x, int y)
{
    if (y == 1)
     return x;
    else
     return x + prod(x,y-1);
}
int main()
{
    int num, num2;
    printf("Enter the number and power:");
    scanf("%d %d",&num,&num2);
    printf("The required result is %d",prod(num, num2));

    return 0;
}