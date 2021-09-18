#include<stdio.h> 

int main(){
    int a[]= {34,67,89}; // memory of 1 integer is 4 bytes. 
    printf("The value of a[0] is %d \n", a[0]);
    printf("The value of a[1] is %d \n", a[1]);
    printf("The value of a[2] is %d \n \n", a[2]);

    printf("The address of a[0] is %u \n", &a[0]);
    printf("The address of a[1] is %u \n", &a[1]);
    printf("The address of a[2] is %u \n", &a[2]);
    return 0;
}