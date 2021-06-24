//2)WAP to read an alphabet and convert it into Uppercase if it is lowercase and vice versa.
#include<stdio.h>
#include<conio.h>
void main()
{
    char a,d;
    int c;
     
     printf("Enter an alphabet:");
     scanf("%c",&a);

    int b = a;
    if(b<94)
    {
    c = b + 32;
    d = c;
    printf("\nIt's lowercase is:%c",d);
    }
    
    else
    {
        c = b - 32;
        d = c;
        printf("\nIt's uppercase is:%c",d);
    }

    getch ();
}