#include<stdio.h> 
void change(int a);

int main(){
    int b;
    b= 21;
    printf("before b is %d \n",b);
    change(b);
    printf("after b is %d \n",b);
    return 0;
}
void change(int a){
    a= 60;
    // return a ;
}