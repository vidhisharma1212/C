#include<stdio.h> 

int main(){
    FILE *ptr;
    char ch[50];
    ptr= fopen("vidk.txt", "r");
    fscanf(ptr, "%s", &ch);
    fclose(ptr);
    printf("Reading the file : %s \n", ch);
    return 0;
}