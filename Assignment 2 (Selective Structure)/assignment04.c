//4)WAP to find all possible roots of quadratic equation aX^2 + bX + c = 0.
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float a, b, c, d, ans1, ans2;

    printf("Enter the coeff. of X^2:");
    scanf("%f",&a);

    printf("Enter the coeff. of X:");
    scanf("%f",&b);

    printf("Enter the constant term:");
    scanf("%f",&c);
    
    d = pow((b*b) - (4*a*c),0.5);

    ans1 = (-b + d)/(2*a);
    ans2 = (-b - d)/(2*a);
    
    printf("\nThe possible roots of the quadratic equation are %.3f and %.3f", ans1, ans2);


    getch ();
}