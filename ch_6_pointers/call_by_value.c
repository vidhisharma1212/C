#include<stdio.h> 

int sum(int a, int b);
int main(){
    int a=5, b=7;
    printf("BEFORE The value of a and b is %d and %d \n", a, b);
    printf("The value of 5 + 7 is %d \n", sum(a,b));
    printf("AFTER The value of a and b is %d and %d \n", a, b);
    return 0;
}
int sum(int a, int b){
    int c;
    c= a+b;
    a=12345;
    b=50291837;
    return c;
}

