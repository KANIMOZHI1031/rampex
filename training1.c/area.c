#include <stdio.h>

int main() {
    float length, width, perimeter;

    // Ask the user to input the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the perimeter
    perimeter = 2 * (length + width);

    // Display the result
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
