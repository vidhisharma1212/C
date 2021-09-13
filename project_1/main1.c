#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

int main(){
    int n, m, chances;

    srand(time(0));
    n= rand()%100 +1;
    m=-3;

    // printf("Number is :%d",n);

    while(m!=n){
        chances++;
        printf("Enter a number here : \n");
        scanf("%d", &m);
        if(m<n){
            printf("Give a greater number..! \n ");
        }
        else if (m>n){
            printf("Give a smaller number..! \n");

        }
    }

        printf("You guessed right at %d time. The number is %d and you wrote %d \n", chances, n, m);
    return 0;
}