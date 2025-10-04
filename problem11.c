#include <stdio.h>
void main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 80)
        printf("Grade: B\n");
    else if (percentage >= 70)
        printf("Grade: C\n");
    else if (percentage >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
}