//9.WAP to find the LCF of two given numbers using function.
#include<stdio.h>

int hcf(int x, int y);

int main()
{
    int a, b, c;
    printf("Enter the numbers: ");
    scanf("%d  \n %d",&a,&b);
    c = hcf(a,b);
    printf("The LCM is : %d",c);

    return 0;
}
int hcf(int x, int y)
{
    int a, b, c;
    a = x;
    b = y;
    while(b!=0)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return (x*y)/a;
}