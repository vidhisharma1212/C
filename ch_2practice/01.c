#include<stdio.h> 

int main(){
    // int a; b=a; not valid
    int a; int b=a; // valid
    int h= 3^3;
    // char dj='He'; Not valid--> '' carry only a single character
    // char dj='H '; Not valid--> space is also a character for the c compiler
    // Doubt-->
    // char dj="Hello ";
    printf("%d \n", h);
    // printf("%c", dj);
    return 0;
}