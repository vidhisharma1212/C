#include<stdio.h> 

void pArray(int *ptr, int n);
int main(){
    int arr[]= {2,4,6,8,10,12,14,16,18,20};
    pArray(arr, 10);
    printf("value of arr[2] :%d\n", arr[2]);
    return 0;
}
/*
void pArray(int *ptr, int n){
    for (int i=0; i<n;i++){
        printf("The value of element %d is %d \n", i+1, *(ptr+i) );
    }
*/
void pArray(int ptr[], int n){
    for (int i=0; i<n;i++){
        printf("The value of element %d is %d \n", i+1, ptr[i] );
    }
    ptr[2]= 50000;
}