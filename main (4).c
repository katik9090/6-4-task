#include <stdio.h>

int main() {
    float a, b, area;

    // Input base and height
    printf("Enter the base of the triangle: ");
    scanf("%f", &a);

    printf("Enter the height of the triangle: ");
    scanf("%f", &b);

    // Calculate area
    area = 0.5 * a * b;

    // Output result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
