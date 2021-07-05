#include<stdio.h>

struct Book{
    char bookisbn[20], booktitle[15], bookauthor[20], bookcat[10];
    int bookpages;
};
int main(){
    struct Book book;
    printf("Enter the book's ISBN : ");
    scanf("%s",&book.bookisbn);
    printf("Enter the book's title : ");
    scanf("%s",&book.booktitle);
    printf("Enter the book's author : ");
    scanf("%s",&book.bookauthor);
    printf("Enter the book's category : ");
    scanf("%s",&book.bookcat);
    printf("Enter the book pages : ");
    scanf("%d",&book.bookpages);
    printf("\nISBN\t\t\tTitle\t\tAuthor\t\tCategory\t\tPages\n");
    printf("%s\t\t    %s\t\t%s\t\t%s\t\t%d\n",book.bookisbn,book.booktitle,book.bookauthor,book.bookcat,book.bookpages);
    return 0;
}