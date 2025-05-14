#include <stdio.h>

int main() {
    float subject_1, subject_2, subject_3, subject_4, subject_5;
    float total, average, percentage;
    char grade;
    printf("Enter the marks of five subjects:\n");
    scanf("%f %f %f %f %f", &subject_1, &subject_2, &subject_3, &subject_4, &subject_5);
    total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 40)
        grade = 'E';
    else
        grade = 'F';
        printf("\nTotal Marks: %.2f / 500.00\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
