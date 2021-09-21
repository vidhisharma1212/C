#include<stdio.h> 

typedef struct date{
    int dt;
    int month;
    int year;
}date;

int greater(int n1, int n2, int n3){
    // n1= 10, n2=2 n3=13
    int g;
    if (n1>n2){
        g=n1;
        if (n1>n3){
        g=n1;
        return n1;
        }
        else{
            g=n3;
            return n3;
        }
    }
    else{
        g=n2;
        if (n2>n3){
            g=n2;
            return n2;
        }
        else{
            g=n3;
            return n3;
        }
    }

}
void display(date d1,date d2,date d3){
    date f;
    int y, m, d;
    y= greater(d1.year, d2.year, d3.year);
    m= greater(d1.month, d2.month, d3.month);
    d= greater(d1.year, d2.year, d3.year);

    if (d1.year==y){
        if (d1.month==m){
            if (d1.dt==d){
                printf("Greatest date: %d/%d/%d", d1.dt, d1.month, d1.year);
            }
        }
    }

    if (d2.year==y){
        if (d2.month==m){
            if (d2.dt==d){
                printf("Greatest date: %d/%d/%d", d2.dt, d2.month, d2.year);
            }
        }
    }

    if (d3.year==y){
        if (d3.month==m){
            if (d3.dt==d){
                printf("Greatest date: %d/%d/%d", d3.dt, d3.month, d3.year);
            }
        }
    }

}
int main(){
    date p={21,9,25};
    date q={19,8,20};
    date r={10,5,23};

    printf("%d/%d/%d \n",p.dt, p.month, p.year);
    printf("%d/%d/%d \n",q.dt, q.month, q.year);
    printf("%d/%d/%d \n",r.dt, r.month, r.year);


    printf("**********Displaying Results 1.0*********** \n");

    display(p,q,r);

    int y, m, d;
    y= greater(p.year, q.year, r.year);
    m= greater(p.month, q.month, r.month);
    d= greater(p.year, q.year, r.year);

    printf("**********Displaying Results 2.0*********** \n");
    printf("%d/%d/%d \n",d,m,y);

    return 0;
}