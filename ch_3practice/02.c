#include<stdio.h> 

int main(){
    int a, b, c;
    printf("Enter marks in subject 1 (Out of 100) : \n");
    scanf("%d", &a);
    printf("Enter marks in subject 2 (Out of 100) : \n");
    scanf("%d", &b);
    printf("Enter marks in subject 3 (Out of 100) : \n");
    scanf("%d", &c);
    float percent=(a+b+c)/3;

    if((percent<40) || a<33 || b<33 || c<33){
        printf("You got %f and you failed \n" , percent);
    }
    else{
        printf("Congrats, You passed with %f Percent! \n", percent);
    }
    return 0;
}