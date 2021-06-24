//S9)WAP to calculate electricity bill for domestic consumers.

#include<stdio.h>
#include<conio.h>
void main()
{
    float a, rs;

    printf("Enter the consumed units:");
    scanf("%f",&a);

    if(a <= 20)
    {
        rs = a * 3;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    else if(a >= 21 && a <= 30)
    {
        rs = a * 7;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    else if(a >= 31 && a <= 50)
    {
        rs = a * 8.5;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    else if(a >= 51 && a <= 150)
    {
        rs = a * 10;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    else if(a >= 151 && a <= 250)
    {
        rs = a * 11;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    else if(a >= 251 && a <= 400)
    {
        rs = a * 12;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    else if(a > 400)
    {
        rs = a * 13;
        printf("\nThe total electricity bill is %.2f",rs);
    }

    getch ();
}