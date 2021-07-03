//8.WAP to count the number of words in a given line of text.
#include<stdio.h>
#include<string.h>

int main(){
    char st[20];
    int i, len;
    printf("Enter the sentence : ");
    gets(st);
    len = strlen(st);
    for(i=0;st[i]!='\0';i++){
        if(st[i]==' '||st[i]=='.')
        len--;
    }
    printf("\nthe number of words in a given line of sentence is %d",len);
}