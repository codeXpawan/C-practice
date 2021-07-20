//6.WAP to write name, roll no and age of five students into a disk filename “STUDENT.DAT”.
#include <stdio.h>

struct student {
  char name[20];
  int roll;
  int age;
} details ;

int main() {
  FILE *dat = fopen("STUDENT.DAT", "w");
  int roll, age;
  char name[20];

  if (dat == NULL) {
    printf("Error!");
    return 1;
  }

  for (int i=0; i<5; i++) {
    printf("\nStudent %c\n", i+65);
    printf("Enter Name:");
    scanf("%s", details.name);
    printf("Enter Roll:");
    scanf(" %d", &details.roll);
    printf("Enter Age:");
    scanf(" %d", &details.age);
    fprintf(dat,"%s %d %d", details.name, details.roll, details.age);
  }
  fclose(dat);

  dat = fopen("STUDENT.DAT", "r");
  printf("\nNo.\tName\tRoll\tAge\n");
  int i=0;
  while (fscanf(dat, "%s%d%d", details.name, &details.roll, &details.age) != EOF) {
    printf("%d\t%s\t%d\t%d\n", i+1, details.name, details.roll, details.age);
    i++;
  }
  fclose(dat);

  return 0;
}