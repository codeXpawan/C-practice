//4.WAP to concatenate two given strings without using a library function.
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
    st3[k] = st1[k];
    for(k;k<=i+j;k++)
    st3[k] = st2[k-i];

    
    printf("The concatenate of the two given string is %s.",st3);

    return 0;
}