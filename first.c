#include <stdio.h>

int main(void)
{
    int score;
    do
    {
        /* code */
        printf("�_������͂��Ă��������F");
        scanf("%d",&score);
    } while (score < 0 || score > 100/* condition */);
 return 0;   
}