//14)WAP to find the sum of series. 1 + 2/2^2 + 3/3^3 + 4/4^4..........n/n^n.
#include<stdio.h>

 int main()
 {
     float n, a, b, m=1, s = 0, i;

     printf("Enter the value of n for the series of (1 + 2/2^2 + 3/3^3 + 4/4^4..........n/n^) :");
     scanf("%f",&n);

     for (i = 1;i<=n;i++)
     {
         for(b = 1;b<=i;b++)
         {
             m = m * i;
         }
         s = s + i/m;
     }
     printf("\nThe sum of the series :%f",s);

     return 0;
 }