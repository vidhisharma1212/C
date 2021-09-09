#include<stdio.h> 

int main(){
    float a=9;
    float b= 8;
    float z= a * b; //It is allowed
    // float a * b = z; //It is not allowed
    printf("The value of a + b is : %f \n", a+b);
    printf("The value of a - b is : %f \n", a-b);
    printf("The value of a * b is : %f \n", z);
    printf("The value of a / b is : %f \n", a/b);

    //Modular division operator
    // % gives the remainder
    // Num/Deno me always num ka sign leke remainder comes
    //cant be applied on float
    printf("5 when divided by 2 gives a remainder of %d \n", 5%2);
    printf("-5 when divided by 2 gives a remainder of %d \n", -5%2);
    printf("5 when divided by -2 gives a remainder of %d \n", 5%-2);
    printf("-5 when divided by -2 gives a remainder of %d \n", -5%-2);

    return 0;
}