//9.WAPto count the frequency of each element of an array.
#include<stdio.h>

int main()
{
    int a[10], i, count1, count2, j, o;
    for (i=0;i<10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    for(i=0,o=0;i<10,o<10;i++,o++)
    {
        count1 = 0;
        for(j=0;j<10;j++)
        {
            if (a[i]==a[j])
            count1 += 1;
        }
        count2 = 0;
        for(j=0;j<=i;j++)
        {
            if (a[i]==a[j])
            count2 += 1;
        }
        if(count2<2)
        printf("The frequency of element %d is %d\n",a[i],count1);
    }

    return 0;
}