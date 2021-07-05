//4.Define a structure name Time having data members hour, minute & second. Write a main program to add two given Time.
#include<stdio.h>

struct Time{
    int hour, min, sec;
}t1,t2;

struct Time add(struct Time, struct Time);
int main(){
    printf("Enter the Hour, Minute and Second for Time1: ");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
    printf("Enter the Hour, Minute and Second for Time2: ");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
    struct Time t3 = add(t1,t2);
    printf("The sum of Time is %d hour, %d minute and %d second.",t3.hour,t3.min,t3.sec);
    return 0;
}

struct Time add(struct Time t1, struct Time t2){
    struct Time t3;
    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hour = t1.hour + t2.hour;
    if(t1.sec>60 || t2.sec>60 || t1.min>60 || t2.min>60){
        printf("Input error...\n");
        main();
    }
    if(t3.sec>60)
        t3.min++;
    if(t3.min>60)
        t3.hour++;
    return t3;
}