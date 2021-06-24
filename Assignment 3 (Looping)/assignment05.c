//5)WAP to read a number and check wheather it is prime or not.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j=2, k;
    printf("Enter a number:");
    scanf("%d",&i);
    int choice;
    do
    {
        k = i%j;
        j++;
        if(k==0){
            choice = 1;
        }

    } while (j<=i/2);
    if(choice == 1)
    printf("It's a composite number.\n");

    else
    printf("It's a Prime number.");

    return 0;
}