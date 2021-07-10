//2.WAP to read 10 elements in an array and count the occurrence of odd and even numbers.
#include<stdio.h>

int main()
{
    int a[10],i,odd = 0, even = 0;
    for(i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%d",(a+i));
        if (*(a+i)%2 == 1)
         odd += 1;
         else
          even += 1;
    }
    printf("There are %d odd and %d even numbers.",odd,even);

    return 0;
}