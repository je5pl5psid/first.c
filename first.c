#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[256];
    int age;
    char gender[2];  
} person ;

void person_scan(person *data);
void person_print(person *data);

int main(void)
{
    person data[3];
    person_scan(data);//yobidasi
//    strcpy(data[1].name,"wawawa");
//    data[1].age = 35;
//    strcpy(data[1].gender,"M");
    person_print(data);//yobidasi  //�z��-> �|�C���^
    return 0;
}

void person_scan(person *data)
{
    printf("���O����͂��Ă�������");
    scanf("%s",&data[1].name);
    printf("�N�����͂��Ă�������");
    scanf("%d",&data[1].age);
    printf("����M=man,F=woman");
    scanf("%s",&data[1].gender);
}

void person_print(person *data)
{
    printf("name  [%s]\n",data[1].name);
    printf("age   [%d]\n",data[1].age);
    printf("gender[%s]\n",data[1].gender);
}