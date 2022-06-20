#include<stdio.h>

int main(void){
    int kazu, a;
    
    for( ; ; ){
        printf("put in number:");
        scanf("%d\n",kazu);
        if(kazu >= 0 && kazu <= 2147483647 )break;
    }
    for(;;){
        a = 2;
        if(kazu % a != 0)break;
        kazu = kazu / a;
        printf("*%d ",a);
    }
    for(;;){
        a = 3;
        if(kazu % a != 0)break;
        kazu = kazu / a;
    }
    return 0;
}