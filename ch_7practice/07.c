#include<stdio.h> 

int main(){
    int mt[3][10];

    printf("--Table of 2 starts from here : ---> \n");
    for (int i=0; i<10; i++){
        mt[0][i]= 2*(i+1);
        printf("2 X %d = %d \n", i+1, mt[0][i]);
    }

    printf("--Table of 7 starts from here : --->\n");

    for (int i=0; i<10; i++){
        mt[1][i]= 7*(i+1);
        printf("7 X %d = %d \n", i+1, mt[1][i]);
    }

    printf("--Table of 9 starts from here : --->\n");

    for (int i=0; i<10; i++){
        mt[2][i]= 9*(i+1);
        printf("9 X %d = %d \n", i+1, mt[2][i]);
    }
    return 0;
}