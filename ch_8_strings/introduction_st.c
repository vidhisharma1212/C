#include<stdio.h> 

int main(){
    // char str[]= {'V','i','d','h','i','\0'};
    char str[]= "Vidhi"; // c will add a null character automatically
    char *ptr= str;
    for(int i=0; i<5; i++){
        printf("%u \n", ptr);
        ptr++;
    }

    char *pr= str;
    while(*pr!='\0'){
        printf("%c", *pr);
        pr++;

    }
    return 0;
}