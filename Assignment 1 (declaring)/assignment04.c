//4)WAP to read temperature in Fahrenheit and convert it into centigrade.(C=5/9 (F-32)
#include<stdio.h>

int main()
{
   float far, cel;

   printf("Enter the temperature in Fahrenheit:");
   scanf("%f",&far);

    cel = (5/9)*(far-32);

    printf("The %.2f in Fahrenheit is %.2f in centigrade.",far,cel);
    return 0;
}