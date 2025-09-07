#include <stdio.h>

int main() {
    float P, R, N, I;

    // Input principal, rate, and time
    printf("Enter the Principal amount: ");
    scanf("%f", &P);

    printf("Enter the Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter the Time (in years): ");
    scanf("%f", &N);

    // Calculate Simple Interest
    I = (P * R * N) / 100;

    // Output result
    printf("The Simple Interest is: %.2f\n", I);

    return 0;
}
