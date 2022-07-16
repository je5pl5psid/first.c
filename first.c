#include <stdio.h>

int hannbetu(int a); /* プロトタイプ宣言 */

int main(void)
{
    int a, b ;
    printf("西暦年を入力してください。");
    scanf("&d",&a);
    printf("%d\n",a);
    hannbetu(a);
    return 0;
}

int hannbetu(int a)
{
    int num, ei ;
    printf("%d\n",a);
    ei = a & 4;
    printf("%d\n",ei);
    if
    (ei == 0){
        printf("sumer");
    }
    else if
    (ei == 2){
        printf("winter");
    }
    else if 
    (ei == 1){
        printf("nasi");
    }
    else if
    (ei == 3){
        printf("nasi");
    }
    return 0;
}
