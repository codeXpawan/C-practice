//11)WAP to read n different numbers and display the sum.
#include<stdio.h>

 int main()
 {
     int i, n, a, sum = 0;
     printf("Enter how many values you want to add :");
     scanf("%d",&n);
     printf("\nEnter the numbers:\n");

     for(i=0;i<n;i++)
     {
         scanf(" %d\n",&a);
         sum = sum + a;
     }
     printf("\nThe sum is :%d",sum);

     return 0;
 }