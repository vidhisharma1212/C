#include<stdio.h> 
void gm();
void ga();
void gn();
int main(){
    printf("How are you ? \n");
    gm();
    ga();
    gn();
    return 0;
}

void gm(){
    printf("Good morning ! \n");
}
void ga(){
    printf("Good afternoon ! \n");
}
void gn(){
    printf("Good night ! \n");
}