#include <stdio.h>
int main(void)
{
    int i ,array1[10];
    printf("10ko no suujiwo , dekugitte kaku:");
    for(i = 0; i < sizeof(array1) / sizeof(array1[0]) ; i++){
       scanf ("%d,",&array1[i]);
    }
    for(i = (sizeof(array1) / sizeof(array1[0])-1) ; i >= 0 ; i--){
        printf("number[%d] :%d\n",i,array1[i]);
    }
    return 0;
}