#include<stdio.h>

int main(void){
    int a , b , c , kazu , i;
    a = 0;
    b = 1;
    printf("put inn suuti\n");
    scanf("%d",&kazu);
    for(i = 1 ;  i < kazu; i++){
        c = b + a;
        a = b;
        b = c;
    }
     printf("%05dtimes %d\n",i,b);
}