//1.WAP to read elements in an array (3x3) and calculate the sum and average of all elements.
#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    for(i = 0;i<3;i++)
    {
        for(j = 0;j<3;j++)
        {
            printf("Enter a number : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}