#include<stdio.h> 

void encrypt(char *c){
    char *ptr= c;
    while(*ptr!='\0'){
        *ptr= *ptr + 1 ;
        ptr++;
    }
}
int main(){
    // char *c; Read only memory 
    char c[]= "Sab kuch moh hai";
    encrypt(c);
    printf("Encrypted string : %s", c);
    return 0;
}