#include <stdio.h>

int main()
{
    int marks_english;
    int marks_math;
    printf("Enter Marks in English : ");
    scanf("%d", &marks_english);
    printf("Enter Marks in Math");
    scanf("%d", marks_math);
    // int total =
    marks_english = 50;
    marks_math = 70;
    // scanf("%d", marks_english);
    int total = marks_english + marks_math;

    printf("marks=%d\n", total);
    return 0;
}