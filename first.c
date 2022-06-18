#include<stdio.h>

int main(void){
    int a , b , c , kazu , i;
    a = 0;
    b = 1;
    printf("put inn suuti\n");
    scanf("%d",&kazu);
    kazu = kazu - 1;
    for(i = 1 ;  i <= kazu; i++){
        c = b + a;
        a = b;
        b = c;
    }
     printf("%05dtimes %d\n",i,b);
return 0;
    for(int i = 1;i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            printf("%02d ",i * j);
        }
        printf("\n");
    }
    return 0;
}