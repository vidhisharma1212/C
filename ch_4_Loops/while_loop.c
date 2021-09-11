#include<stdio.h> 

int main(){
    // while(condition){
    //     Certain Code
    // }
    int m;
    printf("Enter a number : \n");
    scanf("%d", &m);

/*
If this condition true- then loop runs
*/

    while(m<10){
        printf("%d \n", m);
        m++;
    }
    return 0;
}