#include <stdio.h>

int main() {
    int a=5;
    int b=10;
     printf("a=5,b=10\n");
    scanf("%d %d",&a,&b);
    if (a>b) {
        printf("%d b is the larger number.\n",a);
    } else if (a>b) {
        printf("%d a is the larger number.\n",b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}