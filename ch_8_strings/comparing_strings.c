#include<stdio.h>  
#include<string.h> 

int main(){
    char str1[20]= "Hello";
    char str2[15]= "HeLlo";
    int val= strcmp(str1, str2);  

    printf("Now the val is : %d", val);
    return 0;
}