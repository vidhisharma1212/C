#include<stdio.h> 

int main(){
    FILE *ptr1, *ptr2;
    int n;
    ptr1= fopen("05a.txt", "r");
    ptr2= fopen("05b.txt", "w");

    fscanf(ptr1, "%d", &n);
    fprintf(ptr2, "%d", 2*n);
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}