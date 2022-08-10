#include <stdio.h>

int main()
{

    int N, A, B, sulphide;

    if (1 <= N <= 100 && 1 <= A <= 100 && 1 <= B <= 100)
    {
        scanf("%d", &N);
        scanf("%d", &A);
        scanf("%d", &B);
    }
    else
    {
        printf("Enter vaild number");
    };
    sulphide = N * A * B *2;
    printf("%d", sulphide);
}