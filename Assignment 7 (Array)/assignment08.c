//8.WAP to read 10 elements in an array and find the minimum.
#include<stdio.h>

int main()
{
    int a[10],i,min;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=1;i<10;i++)
    {
        if (a[i]<min)
        min = a[i];
    }
    printf("The minimum number is %d",min);
    return 0;
}