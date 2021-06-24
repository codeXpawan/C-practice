/*8)WAP to read percentage scored by a student and print the corresponding division.(Using both 
else if and switch.)

(using else if)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float per;

    printf("Enter the percentage scored by a student:");
    scanf("%f",&per);

    if(per >= 80)
    printf("The division secured by student is Distinction.");

    else if(per >= 60 && per <= 79)
    printf("The division secured by student is First Division.");

    else if(per >= 50 && per <= 59)
    printf("The division secured by student is Second Division.");

    else if(per >= 40 && per <= 49)
    printf("The division secured by student is Third Division.");

    else if(per < 40)
    printf("The student fails the exam.");

    else
    printf("Invalid input.");


    getch ();
}


//(using switch)

#include<stdio.h>
#include<conio.h>
void main()
{
    int per, a;

    printf("Enter the percentage scored:");
    scanf("%d",&per);

    a = per/10;

    switch(a)
    {
        case 1:
        case 2:
        case 3:
        printf("Student has failed the exam.");
        break;

        case 4:
        printf("The division secured is Third division.");
        break;

        case 5:
        printf("The division secured is Second division.");
        break;

        case 6:
        case 7:
        printf("The division secured is First division.");
        break;

        case 8:
        case 9:
        case 10:
        printf("The division secured is Distinction.");
        break;

        default:
        printf("Invalid input.");
        break;

    }

    getch ();
}