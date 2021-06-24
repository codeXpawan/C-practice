//10.WAP to find the value of one number raised to the power of another using function.
#include<stdio.h>

int raised(int x, int y);

int main()
{
    int a, b, c;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("\nEnter the number to be raised by power:");
    scanf("%d",&b);
    c = raised(a,b);
    printf("The final number is : %d",c);

    return 0;
}
int raised(int x, int y)
{
    int a = 1;
    for(y;y>0;y--)
    a = a * x;

    return a;
}