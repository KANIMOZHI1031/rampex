#include <stdio.h>

int main() {
     int numbers[] = {10, 20, 30, 40,};
    int size = sizeof(numbers[0]);
    int sum = 0;
    float average;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    average = (float)sum / size;
    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}
