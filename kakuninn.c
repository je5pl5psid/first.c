#include <stdio.h>

int main(void)
{
    int money,iti,sann,go,hati;
    printf("�艿����͂��Ă�������");
    scanf("%d",&money);
    iti = (int)(money * 0.9);
    sann = (int)(money * 0.7);
    go = (int)(money * 0.5);
    hati = (int)(money * 0.2);
    printf("�ꊄ���́A%d�~\n�O�����́A%d�~\n�܊����́A%d�~\n�������́A%d�~\n",iti,sann,go,hati);
    return 0;
}