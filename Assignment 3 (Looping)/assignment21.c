//21)WAP to display the n terms of square natural numbers and their sum.
#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the value of nth series:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
       printf("%d , ",i*i);

    return 0;
}