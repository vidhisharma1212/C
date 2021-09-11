#include<stdio.h> 

int main(){
    int i=0;
    /*
    while(i<10){
        i++;
    }
    while(i>=10 && i<=20){
        printf("Value of i is: %d \n",i );
        i++;
    }
    */

   while(i<=20){
       if(i>=10){
           printf("Value of i is: %d \n",i );
       }
        i++; // increment operator ; i = 1+ 1
    }
    return 0;
}