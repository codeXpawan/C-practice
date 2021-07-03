//2.WAP to copy the content of a given string to another without using a library function
#include<stdio.h>

int main()
{
    char st[20], cp[20];
    int i;
    printf("Enter the string : ");
    gets(st);
    for(i=0;st[i]!='\0';i++)
        cp[i] = st[i];
    printf("The copied string is %s",cp);

    return 0;
}