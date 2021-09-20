#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[50];
};

int main(){
    // struct employee e1;
    // e1.code= 100; 
    // e1.salary=34.4;
    // strcpy(e1.name, "Vidhi Sharma");

    // or

    struct employee e1={100, 34.4, "Vidhi Sharma"}; // Initialises in same order as defined in the struct employee defination

    struct employee e2={0} ; // initialises all the elements as 0

    printf("The Code of the Employee : %d \nThe Salary of the Employee: %.1f \nThe Name of the Employee : %s \n",e1.code, e1.salary, e1.name);

    printf("The Code of the Employee : %d \nThe Salary of the Employee: %.1f \nThe Name of the Employee : %s \n",e2.code, e2.salary, e2.name);
    return 0;
}