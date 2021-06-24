//13)Two numbers are entered through the keyboard. Write a program to find the value of one
  // number raised to the power of another.
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
     printf("\nTfactorial of given number is :%d",m);

     return 0;
 }