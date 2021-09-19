#include<stdio.h> 

int main(){
    char str1[50];
    char str2[50];
    char c;
    int i=0;

    // ---Second----
    printf("Enter your firstname here : \n");
    scanf("%s", str2);

    // ---First----
    printf("Enter your lastname here character by character : \n");
    // fflush(stdin);
    // scanf("%c", &c);

    do{
        fflush(stdin);
        scanf("%c", &c);
        // printf("%c", c);
        str1[i]= c;
        i++;
    }while(c!='\n');
    str1[i-1]='\0';

    printf("You firstname is : %s \n", str2);
    printf("You lastname is : %s \n", str1);

    printf("comparing : %d \n", strcmp(str1, str2));
    return 0;
}