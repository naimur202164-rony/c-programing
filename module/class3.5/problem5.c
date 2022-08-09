// Write a C program that takes a positive float number and outputs its integer part and real part.
//         Expected Input/Output:

//                 Enter Number: 3.578

//                 Integer part: 3

//                 Real part: .578

// Hint: To find the real part, you can subtract the integer part from the number.
#include <stdio.h>

int main()
{

    float num1 = 3.578;
    int num2 = 3;

    float real = num1 - num2;

    printf("The total= %lf\n", real);
}