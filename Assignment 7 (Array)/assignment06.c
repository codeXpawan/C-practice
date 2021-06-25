//6.WAP to read 10 elements in an array and search for a particular number among the array list.
#include<stdio.h>

int main()
{
    int a[10],i,num;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    printf("Search a number: ");
    scanf("%d",&num);
    for (i=0;i<10;i++)
    {
        if (a[i]==num)
        {
            printf("It's found....");
        }
        else if(i == 9)
        printf("It's not here...");
    }
    return 0;
}