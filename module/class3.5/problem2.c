#include <stdio.h>

// Write a C program that accepts two integers from the user and calculate the product of the two integers.

int main()
{
    int a, b, result;
    printf("Enter number 1 :\n");
    scanf("%d", &a);
    printf("Enter number 2 : \n");
    scanf("%d", &b);

    result = a + b;

    printf("The sum of two number is %d+%d=%d ", a, b, result);
}