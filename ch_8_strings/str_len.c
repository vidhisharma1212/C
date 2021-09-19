#include<stdio.h> 
#include<string.h> 

int main(){
    char *s= "vidhi";
    int a = strlen(s); // excludes the null character .

    printf("Length of string is :  %d \n", a);
    return 0;
}