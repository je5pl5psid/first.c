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
    printf("owari\n");
    for (l = 0; l < 10; l++){
        printf("moji[%d]bannmeha: %d\n", l+1, moji[l]);
    }
keisann(moji,&min,&max);
}





int keisann(int data[10],int *min,int *max){
    int i,j,k,l;
    for(i = 100;i >= 0; i--){
        for( j = 0;j <= 9;j++){
            if(data[j]==i){
                printf("saidaiti :%d\n",data[j]);
                break;
            }
        }
        if(data[j]==i){
            break;
        }
    }
    for(k = 0;k <= 100;k++){
        for(l = 0;l <= 9;l++){
            if(data[l]==k){
                printf("saisyouti :%d\n",data[l]);
                break;
            }
        }
        if(data[l]==k){
            break;
        }
    }
    return 0;
}