#include<stdio.h> 

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *pr= &arr[0];
    printf("Value in *pr is : %d \n", *pr);
    pr= pr+2;
    printf("Value in *pr is : %d", *pr);
    return 0;
}