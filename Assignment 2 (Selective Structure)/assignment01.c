//1)WAP to read 3 numbers an find the middle number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;

    printf("Enter the value of A:");
    scanf("%d",&a);
    
    printf("\nEnter the value of B:");
    scanf("%d",&b);

    printf("\nEnter the value of C:");
    scanf("%d",&c);

    if(a<b || a<c)
    {
        if(a>b || a>c)
        printf("\nA is the middle number.");
    }

    if(b<a || b<c)
    {
        if(b>a || b>c)
        printf("\nB is the middle number.");
    }

    else
    {
        if(c>a || c>b)
        printf("\nC is the middle number.");
    }
    

    getch ();
}