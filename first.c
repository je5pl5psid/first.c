#include <stdio.h>

int main(void)
{
    int i,j,moji[256];
    for(i = 1 ; ; i ++){ 
        printf("suuji wo nyuuryoku site kudasai:");
        scanf("%d",&j);
        for(;;)
        {
            if (j >= -1 && j <= 100) break;
            printf("suuji wo nyuuryoku site kudasai:");
            scanf("%d",&j);

        }
        if (j == -1) break ;
        moji[i] = j ;
        printf("%s\n",moji);
    }
    printf("owari");
    return 0;
} 