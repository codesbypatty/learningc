//program to calculate area of triangle by its sides
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}