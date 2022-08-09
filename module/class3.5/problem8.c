// Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
// Example

// Input

// Temperature in fahrenheit = 205

// Output

// Temperature in celsius = 96.11 C

// Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by

#include <stdio.h>

int main()
{
    float fahrenheit = 205;
    float celsius = 96.11;
    float temp;
    int sum = 5 / 9;
    temp = (fahrenheit - 32) * sum;
    printf("Temp is %lf", temp);
}