#include<stdio.h> 

void count(char *str, char c );
int main(){
    
    char string[30];
    printf("Enter a sentence : \n");
    gets(string);

    char ch;
    printf("Enter the character you want to search : \n");
    scanf("%c", &ch);

    // printf("The senetence : %s \n", string);


    count(string, ch);
    return 0;
}

void count(char *str, char c ){
    char *ptr= str;
    int i=0, n=0;
    while(str[i]!='\0'){
        if (str[i]==c){
            n++;
        }
        i++;
    }
    if (n!=0){
        printf("%c is present in the string %d times. \n", c,n);
    }
    else{
        printf("%c is not present in the string. \n", c);

    }
}