/*
WAP to generate the follwing output:
1 3 5 7 9
3 5 7 9
5 7 9
7 9
9
*/
#include<stdio.h>

 int main()
 {
     int i, j, k;
     for(i=0;i<5;i++)
     {
         k = 0;
         k = (2*i) + 1;
         for( j=4;j>=i;j--){
             printf("%d ",k);
                k += 2;
         }
         printf("\n");
     }
     return 0;
 }