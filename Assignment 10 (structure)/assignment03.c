//3.Define a structure name Date having data members day, month & year. Write a main program toadd two given Date.
#include<stdio.h>

struct Date{
    int year, month, days;
}d1,d2;
int main(){
    struct Date d3;
    printf("Enter the year, month and day for Date1: ");
    scanf("%d %d %d",&d1.year,&d1.month,&d1.days);
    printf("Enter the year, month and day for Date2: ");
    scanf("%d %d %d",&d2.year,&d2.month,&d2.days);
    d3.days = d1.days + d2.days;
    d3.month = d1.month + d2.month;
    d3.year = d1.year + d2.year;
    if(d3.days>30)
        d3.month++;
    d3.days %= 30;
    if(d3.month >12)
        d3.year++;
    d3.month %= 12;
    printf("The sum of dates is %d year, %d month and %d days.",d3.year,d3.month,d3.days);
    return 0;
}