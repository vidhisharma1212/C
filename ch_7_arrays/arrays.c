#include<stdio.h> 

int main(){
    int m[]= {1,2,3,4,5};
    int *p0= &m[0],*p1= &m[1],*p2,*p3,*p4 ;
    // p0=m[0];
    // p1=m[1];
    // p2=m[2];
    // p3=m[3];
    // p4=m[4];
    printf("Value of pointer 0 = %d \n", *p0);
    printf("Address of pointer 0 %d\n", p0);
    printf("Value of pointer 1 = %d \n", *p1);
    printf("Address of pointer 1 %d \n", p1);
    p0++;
    printf("-----CHANGED----- \n");

    printf("Value of pointer 0 = %d \n", *p0);
    printf("Address of pointer 0 %d\n", &m[0]);
    printf("Value of pointer 1 = %d \n", *p1);
    printf("Address of pointer 0 %d\n", &m[1]);

    return 0;
}