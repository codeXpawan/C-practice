//5.WAP to read elements in an array (3x3) and calculate the sum of diagonal matrix.
#include <stdio.h>

int main()
{
    int a[3][3], i, j, sum = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number : ");
            scanf("%d",&a[i][j]);
            if (i==j)
                sum += a[i][j];
        }
    }
    printf("The sum of the diagnol matrix is %d\n",sum);
    return 0;
}
