#include<stdio.h> 

int main(){
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);

    for(n; n; n--){
        printf("%d \n", n);
    }
    return 0;
}