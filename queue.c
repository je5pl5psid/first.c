
#include <stdio.h>

#define SIZE 10000 //�f�[�^�̃T�C�Y���߂�

//�v���g�^�C�v�錾
int enqueue(void);
int dequeue(void);
int peek(void);
int size(void);
int select(int a);

//�O���[�o���ϐ��̐錾
int queue[SIZE];
int queue_first;
int queue_last;

int main(void) //�Z���N�g���邩�v���O�����̏I���i�p�N���j
{
    queue_first = 0;
    queue_last = 0;
    int syuuryou;
    for(;;){
        syuuryou = select(0);
        if(syuuryou == 5) break;
    }
    printf("�I���");
    return 0;
}

int select(int a) //��������̂������߂�i�p�N���j
{
    int idou;
    printf("��������͂��Ă�������\n1=push,2=pop,3=peek,4=size,-1=�I��\n");//-1���I���ɂ���������
    scanf("%d",&idou);
    if(idou == 1) enqueue();
    if(idou == 2) dequeue();
    if(idou == 3) peek();
    if(idou == 4) size();
    if(idou == -1) return 5;
    return 0;
}

int peek(void) //�Ō�ɓ��͂��ꂽ���̂�\�������炵��
{
    printf("�Ō�̐�����%d�ł�\n",queue[queue_first -1]);
    return 0;
}

int size(void) //�L���[�ɂ��܂��Ă�������m�F����
{
    printf("�T�C�Y��%d\n",queue_first - queue_last);
    return 0;
}

int dequeue(void){
    printf("%d�Ԗڂ�%d���ŃL���[�����͂��ł�\n",queue_last,queue[queue_last]);
    queue[queue_last] = 0;
    queue_last ++;
    return 0;
}

int enqueue(void){
    int a;
    while(1){
    printf("��������� -1�͏I��\n");
    scanf("%d",&a);
    if(a == -1) break;
    queue[queue_first] = a;
    queue_first ++;
    }
    return 0;
}


