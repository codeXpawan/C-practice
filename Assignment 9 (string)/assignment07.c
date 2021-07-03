//7.WAP to find the number of vowels, consonants, digits and white spaces in a given string.
#include<stdio.h>

int main()
{
    char st[20];
    int vow=0, cons=0, dig=0, spa=0, i;
    printf("Enter a string : ");
    gets(st);
    for(i=0;st[i]!='\0';i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        vow++;
        else if(st[i]>47&&st[i]<=57)
        dig++;
        else if(st[i]==' ')
        spa++;
        else 
        cons++;
    }
    printf("The number of vowel is %d.\n",vow);
    printf("The number of consonants is %d.\n",cons);
    printf("The number of digits is %d.\n",dig);
    printf("The number of spaces is %d.\n",spa);

    return 0;
}