#include<stdio.h> 

int main(){
    int x=2;
    int y= 3;
    printf("The value of 3*x-8*y is %d \n", 3*x-8*y);

    printf("The value of 8*y/3*x is %d \n", 8*y/3*x);
    // 8*y/3*x =24/6 will give wrong answer 

    /* Operator associativity is used, from left to right-->

     x*y/m*n
    =(x*y)/m*n       Let x*y= Q
    =(Q/m)*n         Let Q/m= A
    =A*n             Let A*n=B
    =B

    */

   /*
   Here in this case,
    8*y/3*x
   =8*3/3*2
   =24/3*2
   =8*2
   =16

   */



    printf("The value of 3*(x-8)*y is %d \n", 3*(x-8)*y);

    /*
    Paranthesis has the topmost prority. In the absence of paranthesis--
    Priority    Operators
    1st           *,/,%
    2nd             +,-
    3rd              =
    */
    return 0;
}