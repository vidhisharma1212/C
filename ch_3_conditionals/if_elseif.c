#include<stdio.h> 

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    
    if(n==1)
    {
        printf("TYour number is 1");
    }
    else if(n==2)
    {
        printf("TYour number is 2");
    }
    else if(n==3)
    {
        printf("TYour number is 3");
    }
    else if(n==4)
    {
        printf("TYour number is 4");
    }

    else{
        printf("Your number is not 1, 2 ,3 or 4");
    }
    return 0;
}