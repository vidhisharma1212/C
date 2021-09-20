#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[50];
};

void info(struct employee n, int num);
void info(struct employee n, int num){
    printf("************Employee Number %d : ************* \n ", num);
    printf("Enter your Employee code here : \n ");
    scanf("%d", &n.code);
    printf("Enter your salary here : \n ");
    scanf("%f", &n.salary);
    printf("Enter your name here : \n ");
    gets(n.name); // DOUBT
    printf("The Code of the Employee %d  : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",num ,n.code, n.salary, n.name);
}

int main(){
    struct employee e1, e2, e3;

    info(e1,1);
    info(e2,2);
    info(e3,3);
   
    printf("The Code of the Employee 2  : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",e2.code, e2.salary, e2.name);

    printf("The Code of the Employee 3  : %d \nThe Salary of the Employee: %f \nThe Name of the Employee : %s \n",e3.code, e3.salary, e3.name);

    return 0;
}