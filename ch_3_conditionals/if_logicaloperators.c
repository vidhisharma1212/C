#include<stdio.h> 

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    /*
    && - for and
    ||- for or
    !- for not (opposite)
    eg. !(3==3) will give false
    !(4==5) will give true
     */

    int vipPass= 0;
    // vipPass= 1;
    // if((age<=70 && age>=18) || !(vipPass==1)) --> then you are allowed at any age..

    if((age<=70 && age>=18) || (vipPass==1)){
        printf("You are above 18 and below 70, so allowed \n");
        
    }

    else{
        printf("You are not allowed.. \n");
    }

    return 0;
}