//WAP that calculate the simple interest and compound interest. The principal amount, rate of interest and time are entered through the keyboard.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    // Accepting input from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    simple_interest = (principal * rate * time) / 100;

    // Calculating compound interest
    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    // Displaying the results
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}