//WAP to calculate the area and circumference of a circle
#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;

    // Accepting radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    // Displaying the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}