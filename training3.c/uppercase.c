#include <stdio.h>
int main() {
    char let='a';
    if(let>='a'&& let<='z'){
        printf("small");
    }
    else if(let>='A'&& let<='z'){
        printf("capital");
    }
    return 0;
}