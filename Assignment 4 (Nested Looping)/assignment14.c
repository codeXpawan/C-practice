/*
WAP to generate the follwing output:
1 2 3 4 5
2 3 4 5
3 4 5
4 5 
5
*/
#include<stdio.h>

 int main()
 {
     int i, j, k;
     for(i=0;i<5;i++)
     {
         k = 0;
         k = i+ 1;
         for( j=4;j>=i;j--){
             printf("%d ",k);
                k += 1;
         }
         printf("\n");
     }
     return 0;
 }