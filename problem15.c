//WAP that swaps values of two variables using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    // Accepting input from the user
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping values using a third variable
    temp = a;
    a = b;
    b = temp;

    // Displaying the swapped values
    printf("After swapping:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    return 0;
}