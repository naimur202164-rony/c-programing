// Write a C program that accepts an employee's total worked hours of a month and the amount he received per hour. Print salary (with two decimal places) of a particular month. Test Data :

//     Input the working hrs : 8

//     Salary amount /
//     hr : 15000

//     Expected Output :

//     Salary = 120000.00

#include <stdio.h>

int main()
{
    int hours = 8;
    int salry = 15000;
    float total = hours * salry;
    printf("Salary is %.2lf", total);
}