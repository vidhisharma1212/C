#include<stdio.h> 

int main(){
    // char str[]= "Jimmy Bhai"; This won't allow you to overwrite the str
    char *str= "Jimmy Bhai";  // This will allow you to overwrite the str
    str= "Lucy Bhai";
    printf("%s", str);
    return 0;
}