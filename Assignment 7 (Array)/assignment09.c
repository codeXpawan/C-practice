//9.WAPto count the frequency of each element of an array.
#include<stdio.h>

int main()
{
    int a[10], i, fre[10], j, o;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    for(i=0,o=0;i<10,o<10;i++,o++)
    {
        fre[o] = 0;
        for(j=0;j<10;j++)
        {
            if (a[i]==a[j])
            fre[o] =fre[o] + 1;
        }
    }
    for (i=0,o=0;i<10;i++,o++)
    printf("The frequency of element %d is %d\n",a[i],fre[o]);

    return 0;
}