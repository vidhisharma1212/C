#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1, e2, e3;
    printf("************Employee Number 1 : ************* \n ");
    printf("Enter your Employee code here : \n ");
    scanf("%d", &e1.code);
    printf("Enter your salary here : \n ");
    scanf("%f", &e1.salary);
    printf("Enter your name here : \n ");
    gets(e1.name); // DOUBT


    printf("************Employee Number 2 : ************* \n ");
    printf("Enter your Employee code here : \n ");
    scanf("%d", &e2.code);
    printf("Enter your salary here : \n ");
    scanf("%f", &e2.salary);
    printf("Enter your name here : \n ");
    gets(e2.name);// DOUBT

    printf("************Employee Number 3 : ************* \n ");
    printf("Enter your Employee code here : \n ");
    scanf("%d", &e3.code);
    printf("Enter your salary here : \n ");
    scanf("%f", &e3.salary);
    printf("Enter your name here : \n ");
    puts(e3.name);// DOUBT


    printf("The Code of the Employee 1  : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",e1.code, e1.salary, e1.name);

    printf("The Code of the Employee 2  : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",e2.code, e2.salary, e2.name);

    printf("The Code of the Employee 3  : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",e3.code, e3.salary, e3.name);

    return 0;
}