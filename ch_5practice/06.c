#include<stdio.h> 

int sum(int n);
int main(){
    int nm;
    printf("Enter the number here: \n");
    scanf("%d", &nm);

    printf("Sum of first %d natural numbers is %d", nm, sum(nm));
    return 0;
}

int sum(int n){
    printf("Adding %d \n", n);
    if(n==1){
        return 1;
    }
    else
    {
    int s= n+ sum(n-1);
    return s;
    }
}