#include <stdio.h>

int main()
{
    int mark[3];
    int mark1, mark2;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Student %dMark ", i + 1);
        scanf("%d\n", &mark[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d  go %d mark\n", i + 1, mark[i]);
    }
}