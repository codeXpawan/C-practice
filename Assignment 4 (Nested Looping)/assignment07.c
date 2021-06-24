/*
WAP to generate the follwing output:
1
11
111
1111
11111
*/
  #include<stdio.h>


 int main()
 {
     int i, j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<=i;j++)
         printf("1");

         printf("\n");
     }
     return 0;
 }
