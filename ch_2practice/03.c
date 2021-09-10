#include<stdio.h> 

int main(){
    int an;
    printf("Enter a number here: \n");
    scanf("%d", &an);
    printf("Divisibility test returns : %d \n", an%97);
    return 0;
}