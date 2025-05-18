#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr[0]);
    int i;
    printf("Original array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\nReversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
