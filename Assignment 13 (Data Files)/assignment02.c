//2.WAP to read numbers from a file and write even, odd to separate file.
#include<stdio.h>
#include<stdlib.h>

int main(){
  FILE *all = fopen("numbers.txt","w");
  int n;
  if(all == NULL){
        printf("Error...");
        exit(1);
    }
  printf("Enter the numbers with space (enter -1 to exit) : \n");
  while (n >= 0){
    scanf("%d", &n);
    putw(n, all);
  }
  fclose(all);
  FILE *odd = fopen("odd.txt","w"), *even = fopen("even.txt","w");
  all = fopen("numbers.txt","r");
  while((n = getw(all)) != EOF){
    if((n%2)==0)
    putw(n,even);
    else
    putw(n,odd);
  }
  fclose(all);
  fclose(odd);
  fclose(even);
  odd  = fopen("odd.txt","r");
  even = fopen("even.txt","r");
  printf("The odd numbers are : ");
  while((n=getw(odd)) != EOF)
  printf("%d  ",n);
  printf("\nThe even numbers are : ");
  while((n=getw(even)) != EOF)
  printf("%d  ",n);
  
  return 0;
}