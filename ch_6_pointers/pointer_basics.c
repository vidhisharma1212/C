#include<stdio.h> 

int main(){
    int i =35;
    int *j; //declaring a pointer
    j= &i; //setting up

    //int *j= &i; // j will store the address of i

    int **k=&j;; //pointer to pointer 
    int ***l=&k;
    printf("THe value of i is %d \n", i);
    printf("THe value of i is %d \n", *(&i));
    printf("THe value of i is %d \n", *j);
    printf("THe value of j is %u \n", *(&j));
    printf("THe value of k is %u \n", *(&k));
    printf("THe value of k is %u \n", *l);
    printf("THe value of j is %u \n", *k);
    printf("THe address of i is %u \n", &i);
    printf("THe address of i is %u \n", j);
    printf("THe address of j is %u \n", &j);
    printf("THe address of j is %u \n", *k);
    return 0;
}