#include<stdio.h>
int main(){
    double bank=500;
    double bet=1.0,betr=1;
    char wl;
    do{
        scanf("%c",&wl);
        fflush(stdin);
        if(wl=='w'){
            bank+=(bet*5);
            betr++;
            bet=betr;
        }
        else if(wl=='l'){
            bank+=bet;
            bet=bet*1.5;
        }
        if(bank<bet){
            printf("failed");
            break;
        }
    }
    while(wl!='e');
    printf("\n%lf",bank);
    return 0;
}

/*This code contains an secrete gambling algorithm*/