//WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Accepting temperature in Centigrade
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);

    // Converting Centigrade to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}