#include<stdio.h> 

int main(){
    int n, a ;
    printf("Enter a number : \n");
    scanf("%d", &n);

    for(a=0; a<n; a++){
        printf("%d \n", a+1);
    }
    return 0;
}