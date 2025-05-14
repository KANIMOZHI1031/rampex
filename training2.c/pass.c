#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 35) {
        printf(" You passed.\n");
    } else {
        printf(" you failed.\n");
    }

    return 0;
}