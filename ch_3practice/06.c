#include<stdio.h> 

int main(){
    float a,h,g,n;
    printf("Enter a number here: \n");
    scanf("%d", &a);
    float b;
    printf("Enter a number here: \n");
    scanf("%d", &b);
    float c;
    printf("Enter a number here: \n");
    scanf("%d", &c);
    float d;
    printf("Enter a number here: \n");
    scanf("%d", &d);

    if (a>b){
        float g=a;
    }
    else if(a<b){
        float g=b;
    }
    if (c>d){
        float h=c;
    }
    else if (d>c){
        float h=d;
    }

    if (h>g){
        float n=h;
    }
    else if (h<g){
        float n =g;
    }

    printf("Highest: %f", n);
    
    return 0;
}