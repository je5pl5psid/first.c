#include <stdio.h>

int keisann(int data[10],int *min,int *max);

int main(void){
    int i,j,k,l,kekka,moji[10] ={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int min;
    int max;
    for(i = 0 ; i < 10; i ++){ 
        printf("suuji wo nyuuryoku site kudasai:");
        scanf("%d",&j);
        printf("%d\n",j);
        for(;;){
            if (j >= -1 && j <= 100) break;
            printf("suujiwonyuuryokusitekudasai:");
            scanf("%d",&j);
        }
    moji[i]=j;
    if (j == -1) break ;
    for (k = 0; k < 10; k++){
        printf("moji[%d] = %d\n", k, moji[k]);
        }
    }
    printf("owari\n");
    for (l = 0; l < 10; l++){
        k = 1;
        printf("moji[%d]bannmeha: %d\n", k, moji[l]);
        k = k + 1;
    }
keisann(moji,&min,&max);
}





int keisann(int data[10],int *min,int *max){
    int i,j,k,l;
    for(i = 100;i >= 0; i--){
        for( j = 9;i >= 0;i--){
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
            if(data[k]==l){
                printf("saisyouti :%d\n",data[k]);
                break;
            }
        }
        if(data[k]==l){
            break;
        }
    }
    return 0;
}