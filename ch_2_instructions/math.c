#include<stdio.h> 
#include<math.h> 

int main(){
    printf("The answer of 4 to the power 5 is %f \n", pow(4,5));

    int a= 5;
    int b= 2;
    float m= 5;
    float k= 2;

    printf("The value of 5/2 : %d \n", a/b);
    printf("The value of 5.0/2 : %f \n", 5.0/b);
    printf("The value of 5/2.0 : %f \n", a/2.0);
    printf("The value of 2/5 : %f", k/m);
    return 0;
}