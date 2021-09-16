#include<stdio.h> 

int multiply(int *n);
int main(){
    int a= 4;
    int *k=&a;
    printf("Value: %d \n", a);
    multiply(k);
    printf("Value: %d \n", a);
    return 0;
}

int multiply(int *n){
    int m=(*n)*10;
    int temp;
    temp= *n;
    *n=m;
    m=temp;
    return *n;
}