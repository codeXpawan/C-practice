/*
WAP to generate the follwing output:
    *
   ***
  *****
 *******
*********
*/
 #include<stdio.h>

 int main()
 {
     int i, j,k;
     for(i=0;i<5;i++)
     {
         for(j=i;j<5;j++)
         printf(" ");
         
         for(k=(2*i)+1;k>0;k--)
         printf("*");
         printf("\n");
     }
     return 0;
 }