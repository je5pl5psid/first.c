#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[64];
    int age;
    char gender[1];//M = man;F = women;also LGBT...+
} person;

void person_print(person data);

int main(void)
{
    person data;

    data.age = 18;
    strcpy(data.gender,"M");
    strcpy(data.name,"GonNGITUNE");

    person_print(data);
    return 0;
}

void person_print(person data)
{
    printf("[name]:%s\n",data.name);
    printf("[age]:%d\n",data.age);
    printf("[gender]:%s\n",data.gender);
    return ;
}
