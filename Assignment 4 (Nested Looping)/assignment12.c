/*
WAP to generate the follwing output:
1
2 6
3 7 10 
4 8 11 13
5 9 12 14 15
*/
#include<stdio.h>

 int main()
 {
     int i, j, k,sum,res;
     for(i=1;i<=5;i++)
     {
         sum=0;
         k=0;
         for(j=1;j<=i;j++){
             if(k == 0){
                res=i;
                k++;
             }
             else{
                res=(6-j);   //to get this condition j must transit through 2 itteration 
             }               //before which makes j = 2 so we add 2 in difference(4) to get 6
             sum += res;
             printf("%d ",sum);
         }
         res = 0;
         printf("\n");
     }
     return 0;
 }