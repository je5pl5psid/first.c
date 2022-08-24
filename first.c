#include <stdio.h>

//suuti nyuuryoku de "25","26","27"atari de sakaime no nanika ga arimasu.

int keisann(int data[10],int *min,int *max);

int main(void){
    int i,j,k,l,kekka,moji[10] ={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int min;
    int max;
    for(i = 0 ; i < 10; i ++){ 
        printf("[%d]suuji wo nyuuryoku site kudasai:",i+1);
        scanf("%d",&j);
        for(;;){
            if (j >= -1 && j <= 100) break;
            printf("suujiwonyuuryokusitekudasai:");
            scanf("%d",&j);
        }
    moji[i]=j;
    if (j == -1) break ;
    }
keisann(moji,&min,&max);
printf("saisyou[%d] saidai[%d]",min,max);
}





int keisann(int data[10],int *min,int *max){
    int i;
    *min = 100;
    *max = 0;
    for(i = 0;i <= 9;i ++){
        if(data[i] == -1)break;
        if(data[i] < *min) *min = data[i];
        if(data[i] > *max) *max = data[i];
    }
}