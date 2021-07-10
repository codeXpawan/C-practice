//1.WAP to read 10 elements in an array and calculate the sum and average of all elements.
#include<stdio.h>

int main()
{
    float a[10];
    float sum = 0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%f",a+i);
        sum = sum + *(a+i);
    }
    printf("The sum of the given number is %.2f and average is %.2f",sum,sum/10);

    return 0;
}