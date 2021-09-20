#include<stdio.h> 
#include<string.h> 

typedef struct employee{
    int code;
    float salary;
    char name[50];
}emp ; // now emp has become a  data-type 
// emp became a nick name for struct employee

void show(struct employee e);
int main(){
    emp e1;
    emp *ptr;

    ptr= &e1;
    ptr->code=100;
    ptr->salary= 45;
    strcpy(ptr->name, "vidhi");

    show(e1);
    return 0;
}

void show(struct employee e){
    printf("The Employee code: %d \n", e.code);
    printf("The Employee salary: %.2f \n", e.salary);
    printf("The Employee name: %s \n", e.name);
}