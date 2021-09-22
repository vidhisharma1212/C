#include<stdio.h> 
#include<string.h> 

typedef struct info
{
    char n[50];
    float salary;
}inf;

int main(){
    FILE *ptr ;
    inf e1, e2;
    printf("Enter your name1 : \n");
    scanf("%s", e1.n);
    printf("Enter your salary1 : \n");
    scanf("%f", &e1.salary);

    printf("Enter your name2 : \n");
    scanf("%s", e2.n);
    printf("Enter your salary2 : \n");
    scanf("%f", &e2.salary);

    ptr= fopen("04.txt", "w");
    // printf("%s %f\n", e1.n, e1.salary);
    fprintf(ptr, "%s  %f \n", e1.n, e1.salary);
    fprintf(ptr, "%s  %f", e2.n, e2.salary);
    return 0;
}