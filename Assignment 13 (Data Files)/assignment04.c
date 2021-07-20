//4.WAP to copy a content of one file to another file.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f1, *f2;
    char ch;

    f1 = fopen("file.txt","w");
    f2 = fopen("copy.txt","w");
    if(f1 == NULL || f2 == NULL){
        printf("Error...");
        exit(1);
    }
    printf("Enter the string (use ctrl+D for EOF):\n");
    while((ch=getchar())!=EOF)
    fputc(ch,f1);
    fclose(f1);
    f1 = fopen("file.txt","r");
    while((ch = fgetc(f1)) != EOF)
    putc(ch,f2);
    fclose(f2);
    printf("\nThe copied string is : \n");
    f2 = fopen("copy.txt","r");
    while((ch = fgetc(f2)) != EOF)
    printf("%c",ch);
    fclose(f2);

    return 0;
}