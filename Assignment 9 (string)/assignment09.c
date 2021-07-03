//9.WAP to check whether a given word is palindrome or not.
#include<stdio.h>
#include<string.h>

int main(){
    char st[20];
    int i, len, len1;
    printf("Enter the sentence : ");
    gets(st);
    len = strlen(st);
    len1 = len-1;
    for(i=0,len1;i<(len/2);i++,len1--){
        if(st[i]==st[len1])
        continue;
        else
        break;
    }
    if((len/2)==i)
    printf("\nThe given words is a palindrome.\n");
    else
    printf("Do you even know What's Palindrome word is?");

    return 0;
}