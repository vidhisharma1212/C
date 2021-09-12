#include<stdio.h> 

int main(){
    int m=5, i=0;
    while(i<10){
        i++;
        if(i!=m){
            continue;
        }
        else{
            printf("%d", i);
        }
    }

    return 0;
}