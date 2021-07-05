#include<stdio.h>

struct Points{
    int poix, poiy;
};
int main(){
    struct Points point;
    printf("Enter X and Y points : ");
    scanf("%d  %d",&point.poix,&point.poiy);
    printf("\nX\t\tY\n%d\t\t%d",point.poix,point.poiy);
    return 0;
}