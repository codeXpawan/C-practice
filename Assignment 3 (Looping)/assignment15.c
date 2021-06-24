//15)WAP to read values from user and find the sum of given numbers until the user enters 0 and
  // also find it's average.
#include<stdio.h>

 int main()
 {
     float n, a, b, m, s = 0;

     printf("Enter the value until you want and press 0 to end :");

     for (n = 0;n >= 0;n++)
     {
         scanf("%f",&a);

         if(a == 0)
         break;

         s = s + a;
     }

     printf("\nThe sum of given number is:%.2f",s);
     
     m = s/n;
     printf("\nThe average of the given number is :%.2f",m);

     return 0;
 }