#include<stdio.h> 

int main(){
    int length, breadth;
    printf("Enter the value of length \n");
    scanf("%d", &length);
    printf("Enter the value of breadth \n");
    scanf("%d", &breadth);

    int area= length*breadth;

    printf("The area of the rectangle is %d", area);
    return 0;
}