#include<stdio.h> 
void gm();
void ga();
void gn();
int main(){
    printf("How are you ? \n");
    gm(); // Directly call
    return 0;
}

void gm(){
    printf("Good morning ! \n");
    ga(); // Indirectly call
}
void ga(){
    printf("Good afternoon ! \n");
    gn(); // Indirectly call
}
void gn(){
    printf("Good night ! \n");
}