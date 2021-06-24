//6)WAP to read two number and swap (interchange) their values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a, rem, que, ans;
  printf("Enter the two digit number:");
  scanf(" %d",&a);

  rem = a%10;
  que = a/10;
  ans = rem*10+que;

  printf("\nThe reversed number is %d",ans);
   return 0;
}