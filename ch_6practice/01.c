#include<stdio.h> 

int main(){
    int a= 34;
    int *k;
    k= &a;
    printf("The address of a is %u \n", k);
    printf("The value of a is %d \n", *k);
    return 0;
}