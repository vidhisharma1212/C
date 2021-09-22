#include<stdio.h> 
#include<stdlib.h> 

int main(){
    int *ptr, n;
    printf("Enter a number here : \n");
    scanf("%d", &n);
    ptr= (int *) calloc(n, sizeof(int));
    for (int i=0; i<n; i++){
        printf("Enter the %d th value\n", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i=0; i<n; i++){ //default value- 0
        printf("The value of %d th element is %d \n", i+1, ptr[i]);
    }
    return 0;
}