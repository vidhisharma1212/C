#include<stdio.h> 
void swap(int *a, int *b);
void wrong_swap(int a, int b);
int main(){
    int x=5, y=7;
    printf("BEFORE The value of x and b is %d and %d \n", x, y);
    // wrong_swap(a,b);
    swap(&x,&y);
    printf("AFTER The value of a and b is %d and %d \n", x, y);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    // no change in mai as this is call by value..
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}