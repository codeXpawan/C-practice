//5.WAP to count characters, words and lines in a text file.
#include <stdio.h>

int main() {
  FILE *f1 = fopen("sample1.txt", "r");
  char ch;
  int chara=0, word=0, lines=0;
  if (f1 == NULL) {
    printf("Error!");
    return 1;
  }

  printf("The Text is :\n");
  f1 = fopen("sample1.txt", "r");
  while((ch = fgetc(f1)) != EOF){
    if(ch != ' ') chara++;
    if(ch == ' ') word++;
    if(ch == '\n') lines++;
    putchar(ch);
  }
  fclose(f1);

  printf("\nThere are %d characters, %d word and %d lines.\n", chara-2, word, lines);

  return 0;
}