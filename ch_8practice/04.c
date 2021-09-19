#include<stdio.h> 

void slice(char *s, int m, int n);
int main(){
    char str[]= "Vidhi";
    slice(str, 1, 4);

    printf("%s", str);
    return 0;
}

void slice(char *s, int m, int n){
    int i=0;
    while((m+i)<n){
        s[i]= s[i+m];
        i++;
    }
    s[i]='\0';
}