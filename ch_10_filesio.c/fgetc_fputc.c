#include<stdio.h> 

int main(){
    FILE *ptr;
    /*
    ptr= fopen("getc.txt", "r");
    // char c= fgetc(ptr);
    printf("The value of character is : %c \n", fgetc(ptr));
    printf("The value of character is : %c \n", fgetc(ptr));
    printf("The value of character is : %c \n", fgetc(ptr));
    printf("The value of character is : %c \n", fgetc(ptr));
    printf("The value of character is : %c \n", fgetc(ptr));
    printf("The value of character is : %c \n", fgetc(ptr));
    printf("The value of character is : %c \n", fgetc(ptr));
    */

   ptr= fopen("putc.txt", "w");
   putc('c', ptr);
   putc('c', ptr);
   putc('c', ptr);
   fclose(ptr);
   
    return 0;
}