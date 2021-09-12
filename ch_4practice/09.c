#include<stdio.h> 

int main(){
    int i=1, n=3, factorial=1;
    while(i<=n){
        factorial*=i;
        i++; 
    }
    printf("Factorial is %d", factorial);

    
    return 0;
}