//2.WAP to read elements in an array (2x3) and calculate sum of rows.
#include <stdio.h>

int main()
{
    int a[2][3], i, j,sum1 = 0, sum2 = 0;
    for(i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++)
        {
            printf("Enter a number : ");
            scanf("%d",&a[i][j]);
            if(i == 0)
            sum1 = sum1 + a[i][j];
            else
            sum2 = sum2 + a[1][j];
        }
    }
    printf("The sum of the first and second row are %d and %d respectively.",sum1,sum2);
    return 0;
}