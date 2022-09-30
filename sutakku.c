#include <stdio.h>

#define SIZE 10000 //データのサイズ決めた

//プロトタイプ宣言
int push(void);
int pop(void);
int peek(void);
int size(void);
int select(int a);

//グローバル変数の宣言
int stack[SIZE];
int stack_num;


int main(void) //セレクトするかプログラムの終了（パクリ）
{
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
    if(idou == 1) push();
    if(idou == 2) pop();
    if(idou == 3) peek();
    if(idou == 4) size();
    if(idou == -1) return 5;
    return 0;
}

int push(void) //プッシュをするらしい
{
    int stack_r_num; //スタックの中に入れたい数字
    while(1){
        printf("数字を入力してください\n-1を入力すると終わり\n");
        scanf("%d",&stack_r_num);
        if(stack_r_num == -1)break;
        stack[stack_num] = stack_r_num;
        stack_num ++;
    }
    return 0;
}

int pop(void) //ポップをするらしい
{
    int p; //よく分からん
    p = 0;
    stack[stack_num] = p;
    stack_num --;
    return 0;
}

int peek(void) //最後に入力されたものを表示するやつらしい
{
    printf("最後の数字は%dです\n",stack[stack_num - 1]);
    return 0;
}

int size(void) //スタックにしまってある個数を確認する
{
    printf("サイズは%d\n",stack_num);
    return 0;
}