/*7)WAP to read two numbers and an arthimetic operator and perform the corresponding arithmetic 
opereation on those numbers.(Using both else if and switch).

(using else if)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, d;
    char c;
    
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the operator (Ex- * for multiplication, / for division, + for addition, - for subtraction, %% for remainder): ");
    scanf(" %c",&c);

    printf("Enter the second number:");
    scanf("%d",&b);

    if(c == '+')
    {
        d = a + b;
        printf("The answer is %d",d);
    }
    else if(c == '-')
    {
        d = a - b;
        printf("The answer is %d",d);
    }

    else if(c == '*')
    {
        d = a * b;
        printf("The answer is %d",d);
    }
 
    else if(c == '/')
    {
        d = a / b;
        printf("The answer is %d",d);
    }

    else if(c == '%')
    {
        d = a % b;
        printf("The answer is %d",d);
    }

    else
    printf("\nThe given operator is not valid.");

    getch ();
}


//(using switch)

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, d;
    char c;
    
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the operator (Ex- * for multiplication, / for division, + for addition, - for subtraction,%% for remainder): ");
    scanf(" %c",&c);

    printf("Enter the second number:");
    scanf("%d",&b);

    switch(c)
    {
        case '+':
        d = a + b;
        printf("The answer is %d",d);
        break;

         case '-':
        d = a - b;
        printf("The answer is %d",d);
        break;

         case '*':
        d = a * b;
        printf("The answer is %d",d);
        break;

         case '/':
        d = a / b;
        printf("The answer is %d",d);
        break;

         case '%':
        d = a%b;
        printf("The answer is %d",d);
        break;

        default:
        printf("\nThe given operator is not valid.");

    }
 
    getch ();
}