#include<stdio.h> 

int main(){
    char str[]= "Radha";
    char *ptr= str;
    for(int i=0; i<5; i++){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}