#include<stdio.h> 

int celcius_to_farhenhiet(int c);
int main(){
    int t;
    float temparature_in_farhenheit;
    printf("Enter the temparature : \n");
    scanf("%d", &t );

    temparature_in_farhenheit= celcius_to_farenhiet(t);
    printf("The temparature %d in farhenheit is %f ", t, temparature_in_farhenheit);
    return 0;
}

int celcius_to_farhenhiet(int c){
    float f;
    f= (c * 9/5) + 32;
}