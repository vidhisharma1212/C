#include<stdio.h> 

int main(){
    int marks[5];
    int *ptr;
    // ptr= &marks[0];
    ptr= marks;

    for(int i=0; i<5; i++){
        printf("Enter the value of marks of %dth student : \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i=0; i<5; i++){
        printf("Enter the value of marks of %dth student is %d \n", i+1, marks[i]);
    }
    return 0;
}