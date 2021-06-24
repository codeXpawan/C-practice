/*3)WAP to read a year and check whether it is leap year or not.(Note: A year is leap
year if it is divisible by 4, 100 and 400.)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int year, r, e, m;

    printf("Enter the year:");
    scanf("%d",&year);

    r = year%4;
    e = year%100;
    m = year%400;

    if(r == 0 || e == 0 || m == 0)
    {
        printf("\n %d is a leap year.",year);
    }

    else
    printf("\n %d is not a leap year.",year);

    getch ();
}