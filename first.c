
#include <stdio.h>

int main(void)
{
    int suuti,amari;
    printf("�N����͂��Ă�������\n");
    scanf("%d",&suuti);
    //amari = suuti % 4;
    if (suuti % 4 == 0)printf("�ẴI�����s�b�N");
    else if(suuti % 4 == 2)printf("�~�̃I�����s�b�N");
    else printf("�����I�����s�b�N");
    
    return 0;
}