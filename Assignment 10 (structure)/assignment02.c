//2.Define a structure name Complex having data members real & img. Write a main program to add two given complex numbers.
#include<stdio.h>

struct Complex{
    float real, img;
}c1,c2;
int main(){
    printf("Enter the real and img part for c1: ");
    scanf("%f %f",&c1.real,&c1.img);
    printf("Enter the real and img part for c2: ");
    scanf("%f %f",&c2.real,&c2.img);
    printf("The sum of real and img part is %.3f+i%.3f",c1.real + c2.real,c1.img + c2.img);
    return 0;
}