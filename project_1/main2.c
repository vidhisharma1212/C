#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

int main(){
    int number, guess, i=0;
    srand(time(0));
    number= rand()%100 +1;


    do{
        i++;
        printf("Guess the number between 1 to 100 : \n");
        scanf("%d", &guess);

        if(guess<number){
            printf("Try guessing a larger number.  \n");
        }
        else if(guess>number){
            printf("Try guessing a smaller number.  \n");
        }
        else if(guess==number){
            printf("You guessed correct at your %d th turn.  \n", i);
            // break;
        }
    }while(guess!=number);
    return 0;
}