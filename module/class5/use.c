#include <stdio.h>
int main()
{

    int n;
    int sum = 0;
    scanf("%d/n", &n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }

    printf("Final sum is %d\n", sum);
}