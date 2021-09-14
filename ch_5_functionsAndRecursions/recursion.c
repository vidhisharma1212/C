#include<stdio.h> 
int factorial(int x);
int main(){
    int k, fac_of_k;
    printf("Enter a number: \n");
    scanf("%d", &k);
    fac_of_k= factorial(k);
    printf("%d", fac_of_k);
    return 0;
}
int factorial(int x){
    printf("Calling factorial (%d) \n", x);
    int f;
    if (x==0 || x==1){
    return 1; // base condition
    }

    else{
        f= x* factorial(x-1);

        return f;
    }
}