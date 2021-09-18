#include<stdio.h> 

void br(int *ptr, int n);
int main(){
    int a[]={0,1,2,3,4,-5,-6,-7,-8, 10,11,32};
    br(a,12);
    return 0;
}

void br(int *ptr, int n){
    int total=0;
    for (int i=0; i<n; i++){
        if (ptr[i]>0){
            total++;
        }
    }
    
    printf("The total number of poisitve integers in the array is %d", total);
}