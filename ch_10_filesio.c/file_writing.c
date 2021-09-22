#include<stdio.h> 

int main(){
    FILE *ptr;
    int n=45;
    ptr= fopen("generated.txt", "w");
    fprintf(ptr, "The number is %d\n", n);
    fprintf(ptr, "Thanks for use\n");
    fclose(ptr);
    return 0;
}