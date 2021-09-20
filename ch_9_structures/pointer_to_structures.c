#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr= &e1;
    // (*ptr).code= 101; You can also write-
    ptr->code= 101; // -> is called arrow operator 
    printf("%d", e1.code);
    return 0;
}