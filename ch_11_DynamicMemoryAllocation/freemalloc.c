#include<stdio.h> 
#include<stdlib.h> 

int main(){
    int *ptr, *ptr2;
    ptr= (int *) malloc(10 * sizeof(int));
    for (int i=0; i<10; i++){
        ptr2= (int *) malloc(15 * sizeof(int));
        printf("Enter the %d th value\n", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for (int i=0; i<6; i++){
        printf("The value of %d th element is %d \n", i+1, ptr[i]);
    }
    return 0;
}