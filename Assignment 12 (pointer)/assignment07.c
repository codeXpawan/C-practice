//7.WAP to read 10 elements in an array and find the maximum.
#include<stdio.h>

int main()
{
    int a[10],i,max;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",(a+i));
    }
    max = *a;
    for(i=1;i<10;i++)
    {
        if (*(a+i)>max)
        max = *(a+i);
    }
    printf("The maximum number is %d",max);
    return 0;
}