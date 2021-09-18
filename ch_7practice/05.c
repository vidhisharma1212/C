#include<stdio.h> 

void reverse(int *ptr, int n);
int main(){
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    reverse(a,10);
    for(int j=0; j<10; j++){
        printf("The value of %dth element is %d \n", j+1, a[j]);
    }
    return 0;
}

void reverse(int *ptr, int n){
    int temp;
    for (int i=0; i<(n/2); i++){
        temp= ptr[i];
        ptr[i] = ptr[n-1-i];
        ptr[n-1-i]= temp;
    }
}