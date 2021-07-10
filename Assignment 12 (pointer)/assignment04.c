//4.WAP to read 10 elements in an array and copy all the elements in reverse order to an another array.
#include<stdio.h>

int main()
{
    int a[10], i, j, b[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%d",(a+i));
    }
    for (i=0,j=9;i<10;i++,j--)
        *(b+i) = *(a+j);
        
    for(j=0;j<10;j++)
    printf("%3d",*(b+j));

    return 0;
}