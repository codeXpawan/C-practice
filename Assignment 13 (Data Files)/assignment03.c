//3.WAP to merge two file to third file.
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
   // Open two files to be merged
   FILE *fp1 = fopen("file1.txt", "r");
   FILE *fp2 = fopen("file2.txt", "r");
  
   // Open file to store the result
   FILE *fp3 = fopen("file3.txt", "w");
   char c;
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
  printf("Enter the string for file 1(use ctrl+D for EOF) :\n");
   while ((c = getchar()) != EOF)
      fputc(c, fp3);
  printf("Enter the string for file 2 (use ctrl+D for EOF):\n");
   while ((c = getchar()) != EOF)
      fputc(c, fp3);
  
   printf("Merged file1.txt and file2.txt into file3.txt\n\n");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fp3 = fopen("file3.txt","r");
   while((c = fgetc(fp3)) != EOF)
   printf("%c",c);
   return 0;
}