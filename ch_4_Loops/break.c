#include<stdio.h> 

int main(){
    int m=0;
    do{
        printf("The value of m is %d \n", m);
        if(m==4){
            break;
        }
        m++;
    }while(m<10);
    return 0;
}