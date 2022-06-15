#include <stdio.h>

int main(void)
{
    int money,iti,sann,go,hati;
    printf("’è‰¿‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
    scanf("%d",&money);
    iti = (int)(money * 0.9);
    sann = (int)(money * 0.7);
    go = (int)(money * 0.5);
    hati = (int)(money * 0.2);
    printf("ˆêŠ„ˆø‚ÍA%d‰~\nOŠ„ˆø‚ÍA%d‰~\nŒÜŠ„ˆø‚ÍA%d‰~\n”ªŠ„ˆø‚ÍA%d‰~\n",iti,sann,go,hati);
    return 0;
}