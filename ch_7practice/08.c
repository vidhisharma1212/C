#include<stdio.h> 

void multiply(int *m,int n, int n2);
int main(){
    int mt[3][10];

    int num[3];
    int *ptr;
    ptr= num;
    for(int nm=0; nm<3; nm++){
        printf("Enter the number : \n");
        scanf("%d", ptr);
        ptr++;
    }

    multiply(mt[0],num[0],10);
    multiply(mt[1],num[1],10);
    multiply(mt[2],num[2],10);

    return 0;
}

void multiply(int *m,int n,int n2){
    printf("--Table of %d starts from here : --->\n", n);

        for (int i=0; i<n2; i++){
                m[i]=n*(i+1);
                printf("%d X %d = %d \n",n , i+1, m[i]);
        }

}