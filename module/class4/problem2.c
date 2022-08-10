#include <stdio.h>

int main()
{
    int h, l, shot;
    printf("Enter can of harry");
    scanf("%d", &h);
    printf("Enter can of lary");
    scanf("%d", &l);
    shot = 10 - h;
    printf("can shoted hary is %d\n", shot);
    shot = 10 - l;
    printf("can shooted my lary is %d\n", shot);
}

#include <stdio.h>

int main()
{

    int Harry, Larry, cans;
    scanf(" %d", &Harry);
    scanf("%d", &Larry);

    cans = 10 - Harry;
    printf("%d\n", cans);
    cans = 10 - Larry;

    printf("%d\n", cans);
}

#include <stdio.h>

int main()
{

    int num1, num2, num3, Harry, Larry;
    num3 = 10;
    scanf("%d and  %d ", &num1, num2);
    Harry = num3 - num1;
    Larry = num3 - num2;
    printf(" %d %d", Harry, Larry);
}