/*
WAP to generate the follwing output:
*****
 ****
  ***
   **
    *
*/
 #include<stdio.h>

 int main()
 {
     int i, j,k;
     for(i=5;i>0;i--)
     {
         for(j=i;j<5;j++)
         printf(" ");
         
         for(k=i;k>0;k--)
         printf("*");
         printf("\n");
     }
     return 0;
 }