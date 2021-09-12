#include<stdio.h> 

int main(){
    /*
    For-->
    int i, sum=0;
    for(i=1; i<=10; i++){
        sum +=i;
    }
    */
    
    /*
    While -->
    int i=1, sum=0;
    while( i<=10){
        sum +=i;
        i++; 
    }
    */

// Do while-->
   int i=1 ,sum=0;
   do{
       sum +=i;
        i++;
   }while( i<=10);
        

    printf("Sum is: %d", sum);
    return 0;
}