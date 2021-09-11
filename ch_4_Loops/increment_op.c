#include<stdio.h> 

int main(){
    int i= 5;
    printf("The initial value of i : %d \n \n", i);
    
    printf("The value of i++ is %d \n", i++);
    printf("the value of i is not printed 6 right here, because it has increased that i into i++ for next time, therefore in the line below 6 is printed .\n" );
    printf("Value of i is: %d \n",i );
    printf("PEHLE PRINT KARE PHIR INCREMENT KARE  \n \n");
    printf("Value of ++i is: %d \n",++i );
    printf("the value of i is printed 7 here, because ++i updates value to +1 there itself. \n" );
    printf("PEHLE INCREMENT KARE PHIR PRINT KARE \n");
    return 0;
}