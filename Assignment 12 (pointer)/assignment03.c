//3.WAP to read 10 elements in an array and copy all the elements to another array.
#include<stdio.h>

int main()
{
    int a[10],i,b[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%d",(a+i));
        *(b+i) = *(a+i);
    }
    for (i=0;i<10;i++)
     printf("%3d",*(b+i));

    return 0;
}