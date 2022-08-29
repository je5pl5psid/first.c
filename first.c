#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[64];
    int age;
    char gender[1];//M = man;F = women;also LGBT...+
} person;

void person_print(person data)
void person_s(person *data)

int main(void){
    person data[3];
    int i;
    for(i = 0; i < 3; i++)
    {
    person_s(&data[i]);
    person_print(data[i]);
    }
    return 0;
}

void person_print(person data){
    printf("[name]:%s\n",data.name);
    printf("[age]:%d\n",data.age);
    printf("[gender]:%s\n",data.gender);

}

void person_s(person *data){
    printf("nennreiwonyuuryokusitekudasai:\n");
    scanf("%d",&data->age);
    printf("namaewonyuuryokusitekudasai:\n");
    scanf("%s",data->name);
    printf("M=man,F=woman,another:\n");
    scanf("%s",data->gender);
    printf("\n");
    return ;
}