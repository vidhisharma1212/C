#include<stdio.h> 

struct vector{
    int x;
    int y;
}vec;
int main(){
    struct vector v1, v2;
    v1.x= 34;
    v1.y= 54;
    printf("X dim : %d \nY dim : %d \n", v1.x, v1.y);

    v2.x= 30;
    v2.y= 53;
    printf("X dim : %d \nY dim : %d \n", v2.x, v2.y);
    return 0;
}