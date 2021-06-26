//6.WAP to read elements in an array (3x3) and find the transpose of a matrix.
#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a number : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",a[j][i]);
        printf("\n");
    }
    return 0;
}
