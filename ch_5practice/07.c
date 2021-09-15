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

// formula-
// 2n-1

void star(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    star(n-1);
    int i;
    for(i=0; i<(2*n-1); i++){
        printf("*");
        }
        
    printf("\n");
}