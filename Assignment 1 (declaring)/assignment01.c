//1)WAP to declare variable of all data type, read the values and display them.
#include<stdio.h>
#include<conio.h>

void main()
{
    //declaring the values
    int a;
    float b;
    char c;
    double d;

    //reading the values

    printf("Enter the integer:");
    scanf("%d",&a);

    printf("Enter the float value:");
    scanf("%f",&b);

    printf("Enter the char value:");
    scanf(" %c",&c);

    printf("Enter the double value:");
    scanf("%lf",&d);

    //displaying the values

    printf("\nThe given inputs are \n integer = %d , size = %d\n float = %f ,size = %d \n char = %c , size = %d\n double value = %lf , size = %d",a,sizeof(a),b,sizeof(b),c,sizeof(c),d,sizeof(d));
    getch ();
}
