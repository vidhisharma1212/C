#include<stdio.h> 

void decrypt(char *c){
    char *ptr= c;
    while(*ptr!='\0'){
        *ptr= *ptr - 1 ;
        ptr++;
    }
}
int main(){
    // char *c; Read only memory 
    char c[]= "Tbc!lvdi!npi!ibj";
    decrypt(c);
    printf("Decrypted string : %s", c);
    return 0;
}