#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a=8;
    int b=9;
    int sum=add(a,b);
    printf("%d %d is %d\n",a,b,sum);
    return 0;
    
}