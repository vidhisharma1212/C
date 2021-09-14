// d-
// Fibonacci series

#include<stdio.h> 

int fibonacci(int n);
int main(){
    int x;
    printf("Enter the th number here: \n");
    scanf("%d", &x);

    printf("The fibonnacci of %d th number is %d \n", x, fibonacci(x));
    return 0;
}

int fibonacci(int n){
    int f;
    printf("Checking fibonacci of %d . \n", n);
    if (n==0){
        return 0;
    }
    else if (n==1 || n==2){
        return 1;
    }
    else{
        f= fibonacci(n-1)+fibonacci(n-2);
        return f;
    }
}