#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[50];
};

int main(){
    struct employee e[100]; // this array can have employee 1 , emple2, 3, 4, 5,...10
    e[1].code= 101;
    e[1].salary= 10000;
    strcpy(e[1]. name, "Vidhi");
    return 0;
}