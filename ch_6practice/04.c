#include<stdio.h> 

int sa(int x, int y, int *sum, float *avg);
int main(){
    int a=4, b=6, sum;
    float avg;
    sa(a, b, &sum, &avg); 
    printf("The value of sum is %d and the value of avg is %f", sum, avg);
    return 0;
}
int sa(int x, int y, int *sum, float *avg){
    *sum= x+y;
    *avg= (float)(*sum)/2;
    // int temp; // sum, temp, x, y
    // temp= sum;
}