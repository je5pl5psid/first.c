
#include <stdio.h>

int main(void)
{
    int suuti,amari;
    scanf("%d",&suuti);
    amari = suuti % 4;
    if (amari == 0)printf("�ẴI�����s�b�N");
    else if(amari == 2)printf("�~�̃I�����s�b�N");
    else printf("�����I�����s�b�N");
    
    return 0;
}