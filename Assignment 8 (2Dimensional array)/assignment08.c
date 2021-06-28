//8.WAP to multiply two given matrices (3x3) and print the resultant matrix
#include <stdio.h>

int main()
{
    int  a[3][3], k, b[3][3], i, j, c[3][3];
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
    for(i=0;i<3;i++)
    {
        for(k=0;k<3;k++)
        {
            c[i][k] = 0;
            for(j=0;j<3;j++)
                c[i][k] += (a[i][j]*b[j][k]);
        }
    }
    printf("The resultant matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}