#include<stdio.h> 
#include<string.h> 

int main(){
    char str1[20]= "Hi";
    char str2[15]= "Vidhi";
    int val= strcmp(str1, str2); 

    printf("Now the val is : %s", val);
    return 0;
}