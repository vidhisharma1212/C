#include<stdio.h> 
#include<string.h> 

int main(){
    char *str1= "hi";
    char str2[15]= "Vidhi";
    strcat(str1, str2);

    printf("Now the str1 is : %s", str1);
    return 0;
}