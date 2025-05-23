#include <stdio.h>
int factorial(int n) {
    if(n==0){
        return 1;
    }
    
    else{
        return n*factorial(n-1);
    }
}

int main() {
    int num;
    printf("%d",factorial(6));
    return 0;
}
