/*7)If a five digit number is input through the keyboard.
   a)calculate the sum of its digits.
   b)reverse the number.
   c)Sum of the first and last digit.
*/
#include<stdio.h>

int main()
{
    int sum = 0;
    int a, b, rem;
    printf("Enter the 5 digit number:");
    scanf("%d",&a);

    b = a;
    while(b!=0)
    {
        rem = b%10;
        sum = sum + rem;
        b = b/10;
    }
    
    printf("\nThe sum of the digits is %d",sum);

    b = a;
    sum = 0;
    while(b!=0)
    {
        rem = b%10;
        sum = sum*10+rem;
        b = b/10;
    }

    printf("\nThe reversed number is %d",sum);


    b = a/10000;
    rem = a%10;
    sum = b + rem;


    printf("\nThe sum of first and last digit is %d",sum);
    return 0;
}