#include<stdio.h> 

void multiply(int *m,int n, int n2);
int main(){
    int mt[3][10];
/*
    printf("--Table of 2 starts from here : ---> \n");
    for (int i=0; i<10; i++){
        mt[2][i]= 2*(i+1);
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

    INSTEAD OF DOING THIS, WE CAN DIRECTLY DEFINE A FUNCTION TO MAKE THE TABLE AND CALL IT IN THE RIGHT PLACE..
*/
    multiply(mt[0],2,10);
    multiply(mt[1],7,10);
    multiply(mt[2],9,10);

    return 0;
}

void multiply(int *m,int n,int n2){
    printf("--Table of %d starts from here : --->\n", n);

        for (int i=0; i<n2; i++){
                m[i]=n*(i+1);
                printf("%d X %d = %d \n",n , i+1, m[i]);
        }

}