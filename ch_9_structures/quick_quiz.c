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

    struct employee radha;
    radha.code= 101; // . --> Member Operator
    radha.salary=37.88;
    strcpy(radha.name, "Radha Sharma");

    struct employee jimmy;
    jimmy.code= 103; // . --> Member Operator
    jimmy.salary=34.02;
    strcpy(jimmy.name, "Jimmy Sharma");

    printf("The Code of the Employee : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n\n",vidhi.code, vidhi.salary, vidhi.name);
printf("-----The next Employee ------- \n");
    printf("The Code of the Employee : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n\n",radha.code, radha.salary, radha.name);

printf("-----The next Employee ------- \n");
    printf("The Code of the Employee : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n\n",jimmy.code, jimmy.salary, jimmy.name);

    return 0;
}