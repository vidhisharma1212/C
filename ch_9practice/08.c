#include<stdio.h> 
#include<string.h> 

typedef struct accInfo{
    int usercode;
    float balance;
    char name[70];
    int phno;
    char mail[100];
    char address[500];
}accInf;
void userinput(accInf p){
    printf("Enter your usercode: \n");
    scanf("%d", &p.usercode);
    printf("Enter your mail: \n");
    scanf("%s", p.mail);
    printf("Enter your contact number: \n");
    scanf("%d", &p.phno);
    printf("Enter your adress: \n");
    scanf("%d", p.address);
    printf("Enter your name: \n");
    gets(p.name); //Doubt 
}
int main(){
    accInf jimm;
    jimm.balance= 4500;
    userinput(jimm);

    printf("Welcome Jimm ! \nYour balance is : %f", jimm.balance);
    return 0;
}