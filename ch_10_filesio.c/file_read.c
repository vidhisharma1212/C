#include<stdio.h> 

int main(){
    FILE *ptr;
    char c;
    ptr= fopen("getc.txt", "r");
    // char c=fgetc(ptr); either way
    c= fgetc(ptr);
    while(c!=EOF){
        printf("%c",c);
        c= fgetc(ptr);
    }
    return 0;
}