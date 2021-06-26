//3.WAP to read elements in an array (3x5) and calculate sum of columns.
#include <stdio.h>

int main()
{
    int a[3][5], i, j,sum[5] = {0,0,0,0,0}, o;
    for(i = 0;i<3;i++)
    {
        for(j = 0;j<5;j++)
        {
            printf("Enter a number : ");
            scanf("%d",&a[i][j]);
            if(j==0)
            sum[0] += a[i][j];
            else if(j==1)
            sum[1] += a[i][j];
            else if(j==2)
            sum[2] += a[i][j];
            else if(j==3)
            sum[3] += a[i][j];
            else
            sum[4] += a[i][j];
        }
    }
    for (o=0;o<5;o++)
    printf("\nSum of column %d : %d",o,sum[o]);
    return 0;
}