#include<stdio.h> 

void kay(int a){
    printf("Address of i is %u \n", &a);
}
int main(){
    int i=3;
    printf("Value of i is %d \n", i);
    printf("Address of i is %u \n", &i);
    kay(i); 
    return 0;
}