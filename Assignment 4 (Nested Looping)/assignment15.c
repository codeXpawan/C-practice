/*
WAP to generate the follwing output:
11111
00000
11111
00000
11111
*/
#include<stdio.h>

 int main()
 {
     int i, j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++) {
         if(i%2 == 0)
         printf("%d ",1);
         else
         printf("%d ",0);
     }
         printf("\n");
     }
     return 0;
 }