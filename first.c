#include <stdio.h>

int main(void)
{
    int i,j,k,l,moji[10] ={0,0,0,0,0,0,0,0,0,0};
    for(i = 0 ; i < 10; i ++)
    { 
        printf("suuji wo nyuuryoku site kudasai:");
        scanf("%d",&j);
        printf("%d\n",j);
        for(;;)
        {
            if (j >= -1 && j <= 100) break;
            printf("suujiwonyuuryokusitekudasai:");
            scanf("%d",&j);
        }
    moji[i]=j;
    if (j == -1) break ;
    for (k = 0; k < 10; k++)
    {
        printf("moji[%d] = %d\n", k, moji[k]);
        }
    }
    printf("owari\n");
    for (l = 0; l < 10; l++)
    {
        k = 1;
        printf("moji[%d]bannmeha: %d\n", k, moji[l]);
        k = k + 1;
        }
    return 0;
    }
