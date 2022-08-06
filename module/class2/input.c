#include <stdio.h>

int main()
{
    int marks_english;
    int marks_math;
    printf("Enter Marks in English : ");
    scanf("%d", &marks_english);
    printf("Enter Marks in Math :  ");
    scanf("%d", &marks_math);
    // int total =

    // scanf("%d", marks_english);
    int total = marks_english + marks_math;
    printf("marks=%d\n", total);

    float temp;
    printf("Enter Temp");
    scanf("%f\n", temp);
    return 0;
}