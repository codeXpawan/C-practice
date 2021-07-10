//12.WAP to insert New value in the array (sorted list ).
#include <stdio.h>

int main()
{
    int a[100],i,n=5;
    char c;
    printf("Enter the first five inputs :\n");
    for(i=0;i<5;i++)
    {
        printf("Enter a number : ");
        scanf("%d",(a+i));
    }
    for(n;n>0;n++)
    {
        printf("Do you want to add more numbers (Y/N) : ");
        scanf(" %c",&c);
        if (c == 'Y' || c == 'y')
        {
            printf("enter the number :");
            scanf("%d",(a+n));
        }
        else
        break;
    }
    printf("\nThe number you entered are : ");
    for(i=0;i<n;i++)
    printf("%d ",*(a+i));
    return 0;
}