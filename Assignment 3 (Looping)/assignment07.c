//7)WAP to display all the 3 Armstrong numbers between 100 to 500.
#include<stdio.h>

int main()
{
    int i, n, ans=0, rem1, rem2, rem3;

    for(i=100;i<=500;i++)
    {
        n=i;
        rem1 = n%10;
        n = n/10;
        rem2 = n%10;
        rem3 = n/10;
        ans =  (rem1*rem1*rem1)+(rem2*rem2*rem2)+(rem3*rem3*rem3);

        if(ans == i)
        printf("%d\n",i);
    }
    return 0;
}