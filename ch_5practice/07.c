#include<stdio.h> 

void star(int n);
int main(){
    int i, n;
    printf("Enter a number here: \n");
    scanf("%d", &n);
    star(n);

    // for(i=1 ;i<=n ; i+=2){
    //     star(n);
    //     printf("\n");
    // }
    return 0;
}

void star(int n){
    printf("*");
}