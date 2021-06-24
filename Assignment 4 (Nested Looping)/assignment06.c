/*
WAP to generate the follwing output:
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
 #include<stdio.h>

 int main()
 {
     int i, j,k,l;
     for(i=0;i<7;i++)
     {
         for(j=65;j<72-i;j++)
         printf("%c",j);

         for(k=1;k<=(2*i)-1;k++)
         {
             printf(" ");
            //  j--;
         }
         if(j == 72) 
            j--;

         for(j=j-1;j>64;j--)
         printf("%c",j);
         
         printf("\n");

     }
     return 0;
 }