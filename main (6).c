#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    // Input marks of 5 subjects
    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &sub5);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 300) * 100;  // assuming each subject is out of 100

    // Output results
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
