/*5)The length and breadth of a rectangle and radius of a circle are input through the keyboard.
 WAP to calculate the area and perimeter of rectangle and the area and circumference of circle.
*/
#include<stdio.h>
#define PI 3.14

int main()
{
   float len, bre, rai, perrec, arrec, percir, arcir;

   printf("\nEnter the length of rectangle:");
   scanf("%f",&len);

   printf("\nEnter the breadth of rectangle:");
   scanf("%f",&bre);

   printf("\nEnter the radius of circle:");
   scanf("%f",&rai);

    perrec = 2*(len+bre);
    arrec = len*bre;
    percir = 2*PI*rai;
    arcir = PI*rai*rai;

    printf("\nperimeter of rectangle:%.2f",perrec);
    printf("\narea of rectangle:%.2f",arrec);
    printf("\nperimeter of circle:%.2f",percir);   
    printf("\narea of circle:%.2f",arcir);

   return 0;
}