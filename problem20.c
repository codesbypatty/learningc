//WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
//Between 90-100%--------------Print ‘A’ 
//80-90%----------------------------Print ‘B’ 
//60-80%---------------------------Print ‘C’ 
//Below 60%----------------------Print ‘D’
#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;
    float percentage;

    // Accept marks for five subjects
    printf("Enter marks for five subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &subject1); 
    printf("Subject 2: ");
    scanf("%d", &subject2);
    printf("Subject 3: ");
    scanf("%d", &subject3);
    printf("Subject 4: ");
    scanf("%d", &subject4);
    printf("Subject 5: ");
    scanf("%d", &subject5);

    // Calculate total and percentage
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500.0) * 100;

    // Print total and percentage
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);

    // Determine and print grade
    if(percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if(percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if(percentage >= 60 && percentage < 80) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
