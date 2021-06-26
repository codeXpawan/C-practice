//7.WAP to add two given matrices (3x3) and print the resultant matrix.
#include <stdio.h>

int main()
{
    int a[3][3], k, b[3][3], i, j;
    for (k=1;k<3;k++)
    {
        printf("Enter the value for matrix %d\n",k);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(k==1)
                {
                  printf("Enter a number : ");
                  scanf("%d",&a[i][j]);
                }
                if(k==2)
                 {
                   printf("Enter a number : ");
                   scanf("%d",&b[i][j]);
                 }

            }
        }
    }
    printf("The sum of the two matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j] = a[i][j] + b[i][j];
            printf("%2d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
