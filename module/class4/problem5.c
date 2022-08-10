#include <stdio.h>

int main()
{
    float T, X;

    if (1 < T < 100 && 1 < X < 100)
    {
        scanf("%lf", &T);
        scanf("%lf", &X);
    }
    else
    {
        printf("Enter Valid Input");
    }
}