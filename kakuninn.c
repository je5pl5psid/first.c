#include <stdio.h>

int main(void)
{
    int money,iti,sann,go,hati;
    printf("定価を入力してください");
    scanf("%d",&money);
    iti = (int)(money * 0.9);
    sann = (int)(money * 0.7);
    go = (int)(money * 0.5);
    hati = (int)(money * 0.2);
    printf("一割引は、%d円\n三割引は、%d円\n五割引は、%d円\n八割引は、%d円\n",iti,sann,go,hati);
    return 0;
}