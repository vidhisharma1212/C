#include<stdio.h> 
#include<math.h> 

struct vector{
    int x;
    int y;
}vec;

struct vector sumVector(struct vector v1, struct vector v2);
int main(){
    struct vector v1, v2;
    v1.x= 4;
    v1.y= 3;
    printf("X dim : %d \nY dim : %d \n", v1.x, v1.y);

    v2.x= 30;
    v2.y= 53;
    printf("X dim : %d \nY dim : %d \n", v2.x, v2.y);

    struct vector sum = sumVector(v1,v2);\
    printf("X dim of result : %d \nY dim of result : %d \n", sum.x, sum.y);
    return 0;
}

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x= v1.x+v2.x;
    result.y= v1.y+v2.y;
    return result;
}