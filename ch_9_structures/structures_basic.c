#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[50];
};

int main(){
    struct employee vidhi;
    vidhi.code= 100; // . --> Member Operator
    vidhi.salary=34.4243;
    strcpy(vidhi.name, "Vidhi Sharma");

    printf("The Code of the Employee : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",vidhi.code, vidhi.salary, vidhi.name);

    return 0;
}