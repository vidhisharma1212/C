#include<stdio.h> 

int main(){
    /*
    int i= 220;
    do{
        printf("Value of i is : %d", i);
        i++;
    } while(i<100);
    */

    int a= 0;
    do{
        printf("%d \n",a);
        a++;
    }while(a<=4);

    // int k=0;
    // do{
    //     a++;  //This will print from 1 to 5, coz in this, after checking the while loop the 4 becomes 5 (4++) and then it prints. then when it goes to while then condition will fail and so loop will exit. 
    //     printf("%d \n",k);
    // }while(a<=4);

    return 0;
}