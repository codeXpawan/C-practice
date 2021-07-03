//5.WAP to compare two given strings without using a library function.
#include<stdio.h>

int main()
{
  char st1[20], st2[20], st3[40];
  int i=0,j=0,k;
  printf("Enter the first string : ");
  gets(st1);
  printf("Enter the second string : ");
  gets(st2);
  for(i=0;st1[i]!='\0';i++);
  for(j=0;st2[j]!='\0';j++);
  for(k=0;k<i;k++)
  {
    if(i==j)
    {
    if(st1[k]=st2[k])
    continue;
    else
    break;
    }
    else
    break;
  }  
  if(k==i)
  printf("The two string are equal.");
  else
  printf("The two string are not equal.");

  return 0;
}