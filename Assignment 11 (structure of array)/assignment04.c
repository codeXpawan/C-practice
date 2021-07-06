/*4.Define a structure name Complex with its member real and img.
   Write a user defined function named addComplex() to add two given Complex numbers.
   The function should take two Complex type arguments and also return Complex type. WAP to implement the UDF in main program.
*/
#include<stdio.h>

struct Complex{
    float real, img;
}c1,c2;
struct Complex addComplex(struct Complex c1, struct Complex c2){
	struct Complex c;
	c.real = c1.real + c2.real;
	c.img = c1.img + c2.img;
	return c;
}
int main(){
    printf("Enter the real and img part for c1: ");
    scanf("%f %f",&c1.real,&c1.img);
    printf("Enter the real and img part for c2: ");
    scanf("%f %f",&c2.real,&c2.img);
	struct Complex c = addComplex(c1,c2);
    printf("The sum of real and img part is %.3f+i%.3f",c.real,c.img);
    return 0;
}
