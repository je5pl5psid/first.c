#include <stdio.h>

int main(void)
{
    int score;
    do
    {
        /* code */
        printf("点数を入力してください：");
        scanf("%d",&score);
    } while (score < 0 || score > 100/* condition */);
 return 0;   
}