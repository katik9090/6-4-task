#include <stdio.h>

int main() {
    int num, square, cube;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculations
    square = num * num;
    cube = num * num * num;

    // Output results
    printf("Square of %d is: %d\n", num, square);
    printf("Cube of %d is: %d\n", num, cube);

    return 0;
}


