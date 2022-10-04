
#include <stdio.h>

#define SIZE 10000 //データのサイズ決めた

//プロトタイプ宣言
int enqueue(void);
int dequeue(void);
int peek(void);
int size(void);
int select(int a);

//グローバル変数の宣言
int queue[SIZE];
int queue_first;
int queue_last;

int main(void) //セレクトするかプログラムの終了（パクリ）
{
    queue_first = 0;
    queue_last = 0;
    int syuuryou;
    for(;;){
        syuuryou = select(0);
        if(syuuryou == 5) break;
    }
    printf("終わり");
    return 0;
}

int select(int a) //何をするのかを決める（パクリ）
{
    int idou;
    printf("数字を入力してください\n1=push,2=pop,3=peek,4=size,-1=終了\n");//-1を終了にしたかった
    scanf("%d",&idou);
    if(idou == 1) enqueue();
    if(idou == 2) dequeue();
    if(idou == 3) peek();
    if(idou == 4) size();
    if(idou == -1) return 5;
    return 0;
}

int peek(void) //最後に入力されたものを表示するやつらしい
{
    printf("最後の数字は%dです\n",queue[queue_first -1]);
    return 0;
}

int size(void) //キューにしまってある個数を確認する
{
    printf("サイズは%d\n",queue_first - queue_last);
    return 0;
}

int dequeue(void){
    printf("%d番目の%dをでキューしたはずです\n",queue_last,queue[queue_last]);
    queue[queue_last] = 0;
    queue_last ++;
    return 0;
}

int enqueue(void){
    int a;
    while(1){
    printf("数字を入力 -1は終了\n");
    scanf("%d",&a);
    if(a == -1) break;
    queue[queue_first] = a;
    queue_first ++;
    }
    return 0;
}


