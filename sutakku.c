#include <stdio.h>

#define SIZE 10000 //�f�[�^�̃T�C�Y���߂�

//�v���g�^�C�v�錾
int push(void);
int pop(void);
int peek(void);
int size(void);
int select(int a);

//�O���[�o���ϐ��̐錾
int stack[SIZE];
int stack_num;


int main(void) //�Z���N�g���邩�v���O�����̏I���i�p�N���j
{
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
    if(idou == 1) push();
    if(idou == 2) pop();
    if(idou == 3) peek();
    if(idou == 4) size();
    if(idou == -1) return 5;
    return 0;
}

int push(void) //�v�b�V��������炵��
{
    int stack_r_num; //�X�^�b�N�̒��ɓ��ꂽ������
    while(1){
        printf("��������͂��Ă�������\n-1����͂���ƏI���\n");
        scanf("%d",&stack_r_num);
        if(stack_r_num == -1)break;
        stack[stack_num] = stack_r_num;
        stack_num ++;
    }
    return 0;
}

int pop(void) //�|�b�v������炵��
{
    int p; //�悭�������
    p = 0;
    stack[stack_num] = p;
    stack_num --;
    return 0;
}

int peek(void) //�Ō�ɓ��͂��ꂽ���̂�\�������炵��
{
    printf("�Ō�̐�����%d�ł�\n",stack[stack_num - 1]);
    return 0;
}

int size(void) //�X�^�b�N�ɂ��܂��Ă�������m�F����
{
    printf("�T�C�Y��%d\n",stack_num);
    return 0;
}