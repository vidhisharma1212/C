#include<stdio.h> 

int main(){
    // 97 -122= a-z

    char nm;
    printf("Enter something here: ");
    scanf("%c", &nm);

    if (nm<=122 && nm>=97){
        printf("Lowercase \n");
    }

    else{
        printf("It is not lowercase");
    }
    return 0;
}