#include<stdio.h> 

int main(){
    int i=1, sum=0, m;
    for (i ; i<=10 ; i++){
        m=8*i;
        sum +=m;
    }
    printf("The sum is %d", sum);
    return 0;
}