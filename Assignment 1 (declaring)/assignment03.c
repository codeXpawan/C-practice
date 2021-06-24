//3)WAP to read marks obtained by a student in 5 subjects. Read the full marks of each subject as well. Print the percent scored by the student.

#include<stdio.h>

int main()
{
    float a, b, c, d, e, f, full, total, per;
    
    printf("Score in Subject 1:");
    scanf("%f",&a);

    printf("\nScore in Subject 2:");
    scanf("%f",&b);

    printf("\nScore in Subject 3:");
    scanf("%f",&c);

    printf("\nScore in Subject 4:");
    scanf("%f",&d);

    printf("\nScore in Subject 5:");
    scanf("%f",&e);

    printf("\nfull marks:");
    scanf("%f",&full);
    total = a+b+c+d+e;

    per = (total/full)*100;

    printf("\n percentge obtined is %.2f %%",per);
    return 0;
}