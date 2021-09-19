#include<stdio.h> 
#include<string.h> 

int main(){
    char *str1= "hi";
    char str2[15];
    strcpy(str2, str1);

    printf("Now the str2 is : %s", str2);
    return 0;
}