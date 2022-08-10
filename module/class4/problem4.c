#include <stdio.h>

int main()
{
    int a, b, h;
    float trapezoid;
    if (1 <= a <= 100 && 1 <= b <= 100 && 1 <= h <= 100)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &h);
    }
    else
    {
        printf("Input a Valid Number");
    }

    trapezoid=(a+b)*h/2;

    printf("result %.1lf\n",trapezoid);
}