#include<stdio.h> 

void display(); //Function prototype
int main(){
    printf("Hello people \n");
    display();  // Funtion call 
    printf("Bye bye people \n");
    return 0;
}

void display(){
    printf("This is display \n"); //Funtion defination
}