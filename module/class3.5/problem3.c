// Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.
// Example

//     Input

//         First number : 10

//     Second number : 5

//     Output

//         Sum = 15

//     Difference = 5

//     Product = 50

//     Quotient = 2

//     Modulus = 0

#include <stdio.h>

int main()

{
    int num1, num2, sum, div, mul, sub, modlus;
    printf("Enter number 1 :");
    scanf("%d\n", &num1);
    printf("Enter number 2 :");
    scanf("%d\n", &num2);

    sum = num1 + num2;
    printf("Sum : %d\n", sum);

    div = num1 - num2;
    printf("Diffrence: %d\n", div);

    mul = num1 * num2;
    printf("Product : %d\n", mul);

    sub = num1 / num2;
    printf("Quotient :%d\n", sub);

    modlus = num1 % num2;

    printf("Moduls: %d\n", modlus);
}