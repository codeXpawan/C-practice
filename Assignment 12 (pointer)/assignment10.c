//10.WAP to read 10 elements in an array and sort them in ascending order.
#include<stdio.h>

int main()
{
    int a[10], i, j,temp;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",(a+i));
    }
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if (*(a+j)<*(a+i))
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    printf("\nThe numbers in ascending order is : ");
    for(i=0;i<10;i++)
    printf(" %d",*(a+i));

    return 0;
}