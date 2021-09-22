#include<stdio.h> 

int main(){
    FILE *p;
    int n[5];
    p= fopen("01.txt", "r");

    for(int i=0; i<3; i++){
    fscanf(p, "%d", &n[i]);
    }
    printf("The three numbers are : %d , %d and %d \n",n[0],n[1],n[2]);

    // OR
    /*
    int a,b,c;
    fscanf(p, "%d %d %d", &a, &b, &c);
    printf("The three numbers are : %d , %d and %d \n",a,b,c);
    */
    return 0;
}