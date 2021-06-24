//2)WAP to read distance between two cities (in km)and display the distance in meters, foot, inches and centimeters.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    // declaring variables
    float dist, meters, foot, inches, centi;
    // reading the values
    printf("Enter the distance between two cities in kilometer(km):");
    scanf("%f",&dist);

    // calculating the distance in meters, foot, inches, centimeters
    // 1km = 1000 meter
    // 1km = 3280.84 foot
    // 1km = 39370.1 inches
    // 1km = 100000 centimeters
    meters = dist*1000;
    foot = dist*3280.84;
    inches = dist*39370.1;
    centi = dist*100000;
    
    //dsplaying the value
    printf("The distance between two cities is %f km \n  %f meters \n  %f foot \n  %f inches \n  %f centimeters",dist,meters,foot,inches,centi);

     getch ();
}