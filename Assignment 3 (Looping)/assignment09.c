//9)WAP to display multiplication table of 5 from 1 to 10.
 #include<stdio.h>

 int main()
 {
     int i,m;

     printf("Multiplication table of 5:\n");

     for(i=1;i<=10;i++)
     {
         m = 5*i;
         printf("%d\n",m);
     }

     return 0;
 }