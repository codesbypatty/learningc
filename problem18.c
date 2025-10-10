//WAP that finds whether a given number is even or odd.
#include <stdio.h>

int main() {
    int num;

    // Accepting input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking for even or odd
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}