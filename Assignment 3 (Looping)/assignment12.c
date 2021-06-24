//12)WAP to read a number and calculate it's factorial.
#include<stdio.h>

 int main()
 {
     int a, m = 1;

     printf("Enter the number to calculate it's factorial :");
     scanf("%d",&a);

     for (a = a;a>0;a--)
     {
         m = m *a;
     }
     printf("\nThe factorial of given number is :%d",m);

     return 0;
 }