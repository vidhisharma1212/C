#include<stdio.h> 

float force(float mass);

int main(){
    float mass ;
    printf("Enter your mass value here (in kg) \n");
    
    scanf("%f", &mass); 

    float w=force(mass);
    printf("Your weight is %.1f Netwon\n", w);
    return 0;
}

float force(float mass){
    float w= 9.8* mass;
    return w;
}