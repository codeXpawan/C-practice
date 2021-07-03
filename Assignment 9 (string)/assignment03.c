//3.WAP to reverse a given string without using a library function.
#include<stdio.h>

int main()
{
    char st[20], rev;
    int i, j,k;
    printf("Enter the string : ");
    gets(st);
    for(i=0;st[i]!='\0';i++);
    for(j=i-1,k=0;k<=i/2;k++,j--)
    {
        rev = st[j];
        st[j] = st[k];
        st[k] = rev;
    }
    printf("The reverse of a string is %s",st);

    return 0;
}