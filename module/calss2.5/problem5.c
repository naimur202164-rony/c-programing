#include <stdio.h>
// Feet to Inch
int main()
{
    int inch;
    printf("Enter you Height:  ");
    scanf("%d", &inch);

    float result = inch / 12;

    printf("result is %f ", result);
}