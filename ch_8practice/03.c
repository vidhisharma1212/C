#include<stdio.h> 

int length(char *ptr);
int main(){
    char str[]= "Vidhi";
    int n= length(str) ;

    printf("Length of the string is : %d \n", n); 
    return 0;
}

int length(char *ptr){
    char *pt= ptr;
    int i=0;
    while(*pt!='\0'){
        i++;
        pt++;
    }
    return i;
}