#include<stdio.h> 

int count(char *str, char c );
int main(){
    
    char string[30];
    printf("Enter a sentence : \n");
    gets(string);

    char ch;
    printf("Enter the character you want to search : \n");
    scanf("%c", &ch);

    printf("The senetence : %s \n", string);

    // char string[]="Vidhidhidhi", ch= 'h'; To test 
    int addition= count(string, ch);

    printf("The no is : %d", addition  );
    return 0;
}

int count(char *str, char c ){
    char *ptr= str;
    int i=0, n=0;
    while(str[i]!='\0'){
        if (str[i]==c){
            n++;
        }
        i++;
    }
    return n;
}