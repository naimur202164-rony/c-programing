// Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
// Example

//     Input

//     Enter principle : 1200

//     Enter time : 2

//     Enter rate : 5.4

//     Output

//         Simple Interest = 129.600006

//                           Principal +
//                           Interest = 1329.6

//     Hint : Formula to find simple interest:

#include <stdio.h>

int main()
{
    int principle = 1200;
    int time;
    float rate, interest, total;
    time = 2;
    rate = 5.4;

    interest = (principle * time * rate) / 100;

    printf("Simple Interest = %lf", interest);

    total = principle + interest;

    printf("Total intereset is %lf\n", total);
}
