// program to calculate area of a parallelogram
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base and height of the parallelogram:\n");
    scanf("%f %f", &base, &height);

    area = base * height;

    printf("The area of the parallelogram is: %.2f\n", area);

    return 0;
}