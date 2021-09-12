#include<stdio.h> 

int main(){
    int i, n=3, factorial=1;
    for(i=1; i<=n; i++){
        factorial*=i;
    }
    printf("Factorial is %d", factorial);

    
    return 0;
}