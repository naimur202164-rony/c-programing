#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    int minus = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int vhagshesh = num1 % num2;
    printf("%d %% %d=%d\n", num1, num2, vhagshesh);
    printf("%d/%d=%d\n", num1, num2, div);
    printf("%d*%d=%d\n", num1, num2, mul);
    printf("%d-%d=%d\n ", num1, num2, minus);
    printf("%d+%d=%d\n", num1, num2, sum);
}