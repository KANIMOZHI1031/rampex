#include <stdio.h>

int main() {
     int arr[] = {5, 10, 15, 20, 25};
    int n =  sizeof(arr[0]);
    int i;
 printf("Elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
