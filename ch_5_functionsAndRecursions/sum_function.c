#include<stdio.h> 

//  Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); //function prototype declaration

int main(){
    int k;
    k= sum(2,3); //function call
    printf("%d", k); // here 2 and 3 are arguments.. arguments are actual
    return 0;
}

int sum(int a, int b){  //  Function defination
    int result; // a and b -- parameters(placeholders)
    result= a+b;
    return result;
}