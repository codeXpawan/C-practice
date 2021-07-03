//10.WAP to sort n number of strings in lexicographical order (dictionary order).
#include<stdio.h>
#include<string.h>

int main(){
    char st[10][20],lex[20];
    int i,val,j;
    for(i=0;i<10;i++){
        printf("Enter the word : ");
        gets(st[i]);
    }
    printf("In lexicographical order :\n");
    for(i=0;i<10;i++){
        for(j=i;j<10;j++){
            strcpy(lex,st[i]);
            val = strcmp(st[j],st[i]);
            if(val<0){
                strcpy(st[i],st[j]);
                strcpy(st[j],lex);
            }
        
        }
        printf("%s\n",st[i]);
    }
    return 0;
}