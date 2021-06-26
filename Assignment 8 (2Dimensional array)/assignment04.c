//4.WAP to find the maximum number in an array (3x3) and replace all the elements with the maximum.
#include <stdio.h>

int main()
{
    int a[3][3], i, j,max;
    for(i = 0;i<3;i++)
    {
        for(j = 0;j<3;j++)
        {
            printf("Enter a number : ");
            scanf("%d",&a[i][j]);
        }
    }
    max = a[0][0];
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (max<a[i][j])
            max = a[i][j];
        }
    }
    printf("The maximum number is %d",max);
    return 0;
}