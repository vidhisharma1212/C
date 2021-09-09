#include<stdio.h> 

int main(){
    int celcius;
    printf("Enter the value of the celcius \n");
    scanf("%f", &celcius);
    float far = (celcius * 9/5) + 32  ;

    printf("%f dgeress celcius is %f farhenheit", celcius, far);
    return 0;
}