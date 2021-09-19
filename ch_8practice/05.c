#include<stdio.h> 

void clone(char *str1, char *str2);
int main(){
    char str1[]="Vidhi";
    char str2[30];

    clone(str1,str2);

    return 0;
}
void clone(char *str1, char *str2){
    int i=0;
    for(i ; i<5 ; i++){
        str2[i]= str1[i];
    }
    str2[i]='\0';
    printf("Str 1 is %s \n", str1);
    printf("Str 2 is %s \n", str2);
}