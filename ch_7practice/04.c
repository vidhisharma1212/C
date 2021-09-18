#include<stdio.h> 

int main(){
    int a[10],n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("The table you requested for is here : \n");
    for (int i=0; i<10; i++){
        a[i]= n*(i+1);
        printf("%d X %d = %d \n",n, i+1, a[i]);
    }
    return 0;
}