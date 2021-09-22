#include<stdio.h> 

int swg(char you, char comp);
char compchoose();
int main(){
    char you, comp;
    comp= 's';
    printf("Enter :\ns-->snake\nw-->water\ng-->gun\n");
    scanf("%c", &you);

    int result = swg(you, comp);
    if(result==0){
        printf("Game draw, you and computer both chose %c", comp);
    }

    if(result==1){
        printf("You won! You chose: %c\nComp chose: %c", you, comp);
    }

    if(result==-1){
        printf("You lost! You chose: %c\nComp chose: %c", you, comp);
    }
    return 0;
}

int swg(char u, char c){
    // 1 if you win, -1 if you lose, o if draw
    if (u==c){
        return 0;
    }

    else if(c=='s'){
        if(u=='g'){
            return 1;
        }
        if(u=='w'){
            return -1;
        }
    }

    else if(c=='w'){
        if(u=='s'){
            return 1;
        }
        if(u=='g'){
            return -1;
        }
    }

    else if(c=='g'){
        if(u=='w'){
            return 1;
        }
        if(u=='s'){
            return -1;
        }
    }
}


char compchoose(){
    int num;
    srand(time(0));
    num= rand()%3+1;
    if(num==1){
        return 's';
    }
    else if(num==2){
        return 'w';
    }
    else if(num==3){
        return 'g';
    }
}