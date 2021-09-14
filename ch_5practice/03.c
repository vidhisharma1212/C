#include<stdio.h> 

float force(int mass);

int main(){
    int mass ;
    printf("Enter your mass value here (in kg) \n");
    
    scanf("%d", &mass);

    float w=force(mass);
    printf("Your weight is\n");
    return 0;
}

float force(int mass){
    float w= 9.8* mass;
    return w;
}