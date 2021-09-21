#include<stdio.h> 

typedef struct complex{
    int real;
    int img;
}comp;

void display(comp c, int n);
int main(){
    comp cn[5];
    for (int i=0; i<5; i++){
        printf("Enter the real value for %d th number: \n", i+1);
        scanf("%d", &cn[i].real);
        printf("Enter the img value for %d th number: \n", i+1);
        scanf("%d", &cn[i].img);
    }
    for (int i=0; i<5; i++){
        display(cn[i], i);
    }
    return 0;
}
void display(comp c, int n){
        printf("**********Displaying Outputs for %d th num************ \n", n+1);
        printf("The value of real part is: %d \n", c.real);
        printf("The value of imaginary part is: %d \n \n", c.img);

}