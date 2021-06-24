/*5)WAP to calculate the area 0f a triangle given the length of it's sides. But for three sides to
form a triange, the sum of two sides must be greater than the third. 
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float a, b, c, s, area;

    printf("Enter the length of side 1 of triangle (cm):");
    scanf("%f",&a);

    printf("Enter the length of side 2 of triangle (cm):");
    scanf("%f",&b);

    printf("Enter the length of side 3 of triangle (cm):");
    scanf("%f",&c);

    if((a+b)>c)
    {
        s = (a+b+c)/2;
        area = pow(s*(s-a)*(s-b)*(s-c),0.5);

        printf("\n The area of the triangle is %.2f cm^2",area);
    }

    else
    {
        printf("\nIt does not satisfy the condition. The sum of first two side must be greater then third.");
    }

    getch ();
}