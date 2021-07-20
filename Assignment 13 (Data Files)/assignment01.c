//1.WAP to write “Purwanchal Campus” to a file, read the content from the file and display it on the screen.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *ptr;
    char ch;

    ptr = fopen("file.txt","w");
    if(ptr == NULL){
        printf("Error...");
        exit(1);
    }
    printf("Enter the string (use ctrl+D for EOF):\n");
    while((ch=getchar())!=EOF)
    fputc(ch,ptr);
    fclose(ptr);
    ptr = fopen("file.txt","r");
    while((ch = fgetc(ptr)) != EOF)
    printf("%c",ch);
    fclose(ptr);

    return 0;
}