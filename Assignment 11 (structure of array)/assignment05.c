/*5.Define a structure name Time with its member hr, min and sec.
   Write a user defined function named timeDiff() to calculate the difference between two time periods.
   The function should take two Time type arguments and also return Time type.
   WAP to implement the UDF in main program.
*/
#include<stdio.h>
#include<string.h>
struct Time{
    int hour, min, sec;
}t1,t2;

struct Time timeDiff(struct Time, struct Time);
int main(){
    printf("Enter the Hour, Minute and Second for Time1: ");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
    printf("Enter the Hour, Minute and Second for Time2: ");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
    struct Time t3 = timeDiff(t1,t2);
    printf("The difference of Time is %d hour, %d minute and %d second.",t3.hour,t3.min,t3.sec);
    return 0;
}

struct Time timeDiff(struct Time t1, struct Time t2){
    struct Time t3;
    t3.sec = t1.sec - t2.sec;
    t3.min = t1.min - t2.min;
    t3.hour = t1.hour - t2.hour;
    if(t3.hour<0 || t1.sec>60||t2.sec>60||t1.min>60||t2.min>60){
        printf("Input error...\n");
        main();
    }
    if(t3.sec<0){
        t3.min--;
        t3.sec += 60;
    }
    if(t3.min<0){
        t3.hour--;
        t3.min += 60;
    }
    return t3;
}
