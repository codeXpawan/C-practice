//6.WAP to convert all characters in a given string to uppercase.
#include<stdio.h>

int main()
{
    char st[20];
    int i,j;
    printf("Enter the string : ");
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        j = st[i];
        if(j<80)
        continue;
        else
        {
            j = j - 32;
            st[i] = j;
        }
    }
    printf("The sting in uppercase is %s",st);
    return 0;
}