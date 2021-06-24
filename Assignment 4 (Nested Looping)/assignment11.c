/*
WAP to generate the follwing output:
    1
   121
  12321
 1234321
123454321
*/
#include<stdio.h>

 int main()
 {
     int i, j,k, l;
     for(i=1;i<6;i++)
     {
         for(j=i;j<5;j++)
         printf(" ");
         
         for(k=1;k<=i;k++)
         printf("%d",k);

         for(l=k-2;l>0;l--)
         printf("%d",l);
        
         printf("\n");
     }
     return 0;
 }