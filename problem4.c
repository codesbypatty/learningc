//WAP that checks whether the two numbers entered by the user equal or not
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("The two numbers are equal.");
    } else {
        printf("The two numbers are not equal.");
    }

    return 0;
}