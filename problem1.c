// Addition of two numbers
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, sum;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    sum = firstNumber + secondNumber;

    printf("Sum of %d and %d is %d\n", firstNumber, secondNumber, sum);

    return 0;
}