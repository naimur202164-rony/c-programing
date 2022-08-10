#include <stdio.h>

int main()
{
    float t, x,sum;

    if (1 < t < 100 && 1 < x < 100)
    {
        scanf("%lf", &t);
        scanf("%lf", &x);
    }
    else
    {
        printf("Enter Valid Input");
    }
    double n=8%3;
    sum=t/x;
    printf("%lf %lf",n,sum);
}