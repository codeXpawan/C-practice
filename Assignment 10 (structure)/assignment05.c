//5.Define a structure name Distance having data members feet & inch. Write a main program to add two given Distances.
#include<stdio.h>

struct Distance{
    int feet, inch;
}d1,d2;
int main(){
    struct Distance d3;
    printf("Enter the distance in feet and inch for distance1 : ");
    scanf("%d %d",&d1.feet,&d1.inch);
    printf("Enter the distance in feet and inch for distance1 : ");
    scanf("%d %d",&d2.feet,&d2.inch);
    if(d1.inch>12 || d2.inch>12){
        printf("Input format error....\n");
        main();
    }
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    if(d3.inch>12)
        d3.feet++;
    d3.inch %= 12;
    printf("The sum of the distance is %d feet and %d inch.",d3.feet,d3.inch);
    return 0;
}