#include<stdio.h> 

int main(){
    FILE *mt;
    int n;
    printf("Enter the integer you want the table of : \n");
    scanf("%d", &n);
    mt= fopen("02.txt", "w");
    for(int i=1; i<=10; i++){
        fprintf(mt,"%d X %d = %d \n", n,i, n*i);
    }
    fclose(mt);
    printf("Succesfully generated table of %d to 02.txt", n);
    return 0;
}