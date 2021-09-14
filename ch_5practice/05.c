#include<stdio.h> 

int main(){
    int a= 3;
    printf("%d %d %d \n", a, ++a, a++);
    /*
    Here, the arguments do not pass from left to right, we assume that these 
    arguments pass from left to right, but they actually dont.

    It depends from compiler to compiler that in what order it reads..
    */
    return 0;
}