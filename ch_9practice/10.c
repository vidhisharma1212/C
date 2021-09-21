#include<stdio.h> 
typedef struct date{
    int dt;
    int month;
    int year;
}date;

int dateCmp(date d1, date d2);
int main(){
    date p={19,8,25};
    date q={12,8,25};
    int n=dateCmp(p,q);
    if (n==1){
        printf("Greatest date is p : %d/%d/%d \n",p.dt, p.month, p.year);
    }
    else if (n==2){
        printf("Greatest date is q : %d/%d/%d \n",q.dt, q.month, q.year);
    }
    else if(n==0){
        printf("Both dates are equal : %d/%d/%d and %d/%d/%d \n",p.dt, p.month, p.year, q.dt, q.month, q.year);
    }

    return 0;
}

int dateCmp(date d1, date d2){
    if (d1.year>d2.year){
        return 1;
    }
    else if (d1.year<d2.year){
        return 2;
    }
    else{
        if (d1.month>d2.month){
            return 1;
        }
        else if (d1.month<d2.month){
            return 2;
        }

        else{
            if (d1.dt>d2.dt){
                return 1;
            }
            if (d1.dt<d2.dt){
                return 2;
            }
            else{
                return 0;
            }
        }
    }

}