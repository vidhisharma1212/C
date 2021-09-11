#include<stdio.h> 

int main(){
    float amt, ta;
    printf("Enter you annual income: \n");
    scanf("%f", &amt);
    float p;
    float tax;
    tax=0;

    // ta= (amt*p)/100;

    if (amt<250000){
        printf("There is no tax for you. \n");
        tax=0;
    }
    if (amt>250000 && amt<500000){
        printf("Tax percent for you : 5perc \n");
        tax= tax+0.05*(amt- 250000);

    }
    if (amt>=500000 && amt<1000000){
        printf("Tax percent for you : 20perc \n");
        tax= tax+0.20*(amt- 500000);
    }
    if (amt>1000000){
        printf("Tax percent for you : 30perc \n");
        tax= tax+0.30*(amt- 1000000);
    }

    printf("Amount to be paid by you: %f", tax);
    return 0;
}