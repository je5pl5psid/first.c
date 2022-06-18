
#include <stdio.h>

int main(void)
{
    int suuti,amari;
    printf("年を入力してください\n");
    scanf("%d",&suuti);
    //amari = suuti % 4;
    if (suuti % 4 == 0)printf("夏のオリンピック");
    else if(suuti % 4 == 2)printf("冬のオリンピック");
    else printf("無しオリンピック");
    
    return 0;
}