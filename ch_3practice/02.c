#include<stdio.h> 

int main(){
    int o, a, b, c;
    primtf("Tell out of what.\n");
    scanf("%d", &o);
    printf("Enter marks in subject 1 (Out of 100) : \n");
    scanf("%d", &a);
    printf("Enter marks in subject 2 (Out of 100) : \n");
    scanf("%d", &b);
    printf("Enter marks in subject 3 (Out of 100) : \n");
    scanf("%d", &c);

    pa=(100*a)/o;
    pb=(100*b)/o;
    pc=(100*c)/o;
    float percent= ((a+b+c)/(3*o))*100;
    if (percent>=40){
        if((pa>=33 && pb>=33)&& pc>=33){
            printf("You got more than 33 perc in every subject. \n");
            printf("Congrats, You passed with %f Percent! \n", percent);
        }
    }
    return 0;
}