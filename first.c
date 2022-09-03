#include<stdio.h>

#define stacksize 100
#define success 1
#define failure 0

typedef int data_t;

data_t stack_data[stacksize];
int stack_num;

int push(data_t push_data);
int pop(data_t *pop_data);
void stackprint();

int main(void)
{
    int i,p;
    stack_num = 0;    
}




