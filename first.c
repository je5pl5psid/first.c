
#include <stdio.h>

int main(void)
{
    int suuti,amari;
    scanf("%d",&suuti);
    amari = suuti % 4;
    if (amari == 0)printf("夏のオリンピック");
    else if(amari == 2)printf("冬のオリンピック");
    else printf("無しオリンピック");
    
    return 0;
}