//8)WAP to display Fibonacci series upto n terms.(0 1 1 2 3 5 8 13)
#include<stdio.h>

 int main()
 {
     int a, b, c, i, n;

     printf("Enter the value of nth series :");
     scanf("%d",&n);
     a = 0;
     b = 1;
     printf("\nThe Fibonacci series upto nth terms : %d , %d",a,b);

     for(i = 0;i<n;i++)
     {
         c = a;
         printf(" , %d",a+b);
         a = b;
         b = c+b;
     }

     return 0;
 }