#include<stdio.h> 

int main(){
    int radius, height;
    printf("Enter the value of the radius \n");
    scanf("%d", &radius);

    printf("Enter the value of the height \n");
    scanf("%d", &height);
    float pi= 3.14;

    printf("The area of the circle is %f square units /n", pi*radius*radius);

    printf("The volume of the cylinder is %f unit cube",pi*radius*height);

    
    return 0;
}