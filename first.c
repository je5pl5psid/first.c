#include <stdio.h>

int keisann(int);

int main(void){
    int i,j,k,l,moji[10] ={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int min,max;
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
    
    max=keisann(moji[]);
    return 0;
}

int keisann(int moji[]){
    int i,j,k,l,m,n,array[] = {-2,-2,-2,-2,-2};
    for(i = 0 ; i < 5 ; i ++){
        j = i * 2;
        k = j + 1;
        moji[j] = l;
        moji[k] = m;
        if(l >= m){
            &array[i] = &moji[j];
        }
        else {
            &array[i] = &moji[k];
        }
    }
    for(i = 0 ; i < 5; i ++){
        printf("array{%d} :%d",i,array[i]);
    }
}
