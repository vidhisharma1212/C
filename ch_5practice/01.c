#include<stdio.h> 

float avg(int a, int b, int c);
int main(){
    float average;
    int x, y, z;
    printf("Enter the vale of no. 1 : \n");
    scanf("%d", &x );

    printf("Enter the vale of no. 2 : \n");
    scanf("%d", &y );

    printf("Enter the vale of no. 3 : \n");
    scanf("%d", &z );

    average= avg(x,y,z);
    printf("The average of the 3 numbers is %f ", average);
    return 0;
}

float avg(int a, int b, int c){
    float avg;
    avg= (float)(a+b+c)/3;
    return avg;
}