//11.WAP to convert decimal number to binary number using the function.
#include<stdio.h>

int binary(int x);

int main()
{
    int a;
    printf("Enter the decimal number: ");
    scanf("%d",&a);
    a = binary(a);
    printf("The binary form is : %d",a);

    return 0;
}
int binary(int x)
{
    int a = 0, b = 1;
    while(x!=0)
    {
        a = a + b * (x%2);
        x = x/2; 
        b = b *10;
    }

    return a;
}