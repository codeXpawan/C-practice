//5.WAP to separate odd and even integers in separate arrays.
#include<stdio.h>

int main()
{
    int a[10],i,odd[10],even[10],o = 0,e = 0;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",(a+i));
        if (*(a+i)%2 == 1)
        {
            *(odd+o) = *(a+i);
            o++;
        }
        else
        {
            *(even+e) = *(a+i);
            e++;
        }
    }
    printf("Odd numbers: ");
    for(o=o-1;o>=0;o--)
    printf("%3d",*(odd+o));
    printf("\nEven numbers: ");
    for(e=e-1;e>=0;e--)
    printf("%3d",*(even+e));
    return 0;
}