//8)WAP to read two numbers and find the quotient and remainder.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //declaring variables
   int div,dis;
   int quo,rem;
   
   //reading the values

   printf("Enter the divident:");
   scanf("%d",&div);

   printf("\nEnter the divisor:");
   scanf("%d",&dis);

    //calculating the answers

    quo = div/dis;
    rem = div % dis;

    //displaying the values
    printf("\nThe quotient is %d",quo);
    printf("\nThe remainder is %d",rem);

   return 0;
}