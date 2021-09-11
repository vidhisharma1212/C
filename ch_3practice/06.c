#include<stdio.h> 

int main(){
    float a,b,c,d,h,g,n;
    printf("Enter a number here: \n");
    scanf("%f", &a);
    
    printf("Enter a number here: \n");
    scanf("%f", &b);
    
    printf("Enter a number here: \n");
    scanf("%f", &c);
    
    printf("Enter a number here: \n");
    scanf("%f", &d);

    if (a>b){
        g=a;
    }
    else if(a<b){
        g=b;
    }
    // printf("Out of a and b, %f \n", g);

    if (c>d){
        h=c;
    }
    else if (d>c){
        h=d;
    }
    // printf("Out of c and d, %f \n", h);
    
    if (h>g){
        n=h;
    }
    else if (h<g){
        n =g;
    }

    printf("Highest: %f \n", n);
    
    return 0;
}