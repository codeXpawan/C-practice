/*6)WAP to read a 3 digit number and check whether it is Armstrong number or not. (for example
153=(1*1*1)+
(2*2*2)+(3*3*3) is an Armstrong number.)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int d, a, rem, ans = 0;

   printf("Enter the value:");
   scanf("%d",&d);

    a =d;
    while(a != 0)
    {
        rem = a%10;
        ans = ans + rem*rem*rem;
        a = a/10;
    }

    if(ans == d)
    printf("The given number is Armstrong number.");

    else
    printf("The given number is not Armstrong number.");

    getch ();
}