#include<stdio.h> 

int main(){
    float p, r, t;
    printf("Enter the value of the principle amount \n");
    scanf("%f", &p);
    printf("Enter the value of the rate of interest \n");
    scanf("%f", &r);
    printf("Enter the value of the time period \n");
    scanf("%f", &t);

    float si= (p*r*t)/100;

    printf("The Simple Interest is : %f", si);
    return 0;
}