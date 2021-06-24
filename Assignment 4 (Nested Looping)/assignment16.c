/*
WAP to generate the follwing output:
10101
01010
10101
01010
10101
*/
#include<stdio.h>

 int main()
 {
     int i, j, k;
     for(i=0;i<5;i++)
     {
         k = i;
         for(j=0;j<5;j++) {
         if((k+j)%2 == 0)
         printf("%d ",1);
         else
         printf("%d ",0);
     }
         printf("\n");
     }
     return 0;
 }