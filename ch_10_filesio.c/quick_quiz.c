#include<stdio.h> 

int main(){
    FILE *ptr;
    int num ,num2;
    ptr= fopen("vid2.txt", "r");
    if (ptr==NULL){
        printf("The file does not exist.");
    }
    else{
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of Number : %d \n", num);
        printf("The value of Number 2 : %d \n",num2);
    }
    return 0;
}