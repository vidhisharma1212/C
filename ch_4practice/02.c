#include<stdio.h> 

int main(){
    int n, i;
    n=10;

    for(i=10;i;i--){
        printf("%d * %d = %d \n",n,i, n*i);
    }

    return 0;
}