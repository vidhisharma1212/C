#include<stdio.h> 

int main(){
    /*
    int i, m=200, k;
    for(i=2 ; i<=m ; i++){
        if(m%i==0){
            k= 0; // composite

            printf("This is a composite number. \n");
            break;
        }
        else{
            k=1; // prime
        }
    }
    printf("The value of k is (0 if composite, 1 if prime) %d .\n", k);
    if(k==1){
    printf("%d is a prime number. \n", m);
    }
    */

    int i, m=2, prime=1;
    for(i=2 ; i<m ; i++){
          if(m%i==0){
            prime= 0; // composite
            break;
          }
    }
    if(prime==0){
            printf("This is a composite number. \n");
    }
    else{
        printf("This is a prime number. \n");
    }

    return 0;
}