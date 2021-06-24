//09)WAP to read time in seconds and convert it into hr, min, sec.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //declaring variables
    float sec, hr, min;

    //reading the value
    printf("Enter the time in second:");
    scanf("%f",&sec);

    //calculating the answer
    min = sec/60;
    hr = min/60;

    //displaying the answers
    printf("The given time is \n %.2f second \n %.3f minutes \n %.3f hours",sec,min,hr);
    return 0;
}