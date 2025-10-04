//WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student
#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int sum;
    float percentage;

    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%d", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%d", &subject5);

    sum = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (sum / 5.0);

    printf("Sum of marks = %d\n", sum);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}