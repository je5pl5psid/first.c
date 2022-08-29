#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[256];
    int age;
    char gender[2];  
} person ;

void person_scan(person *data,int j);
void person_print(person *data,int k);

int main(void)
{
    person data[3];
    int i,l;
    for(i = 0;i < 3;i++)
    {
        person_scan(data,i);
    }
    for(l = 0;l < 3;l++)
    {
        person_print(data,l);
    }
    return 0;
}

void person_scan(person *data,int j)
{
    printf("–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢[%d]",j);
    scanf("%s",&data[j].name);
    printf("”N—î‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢[%d]",j);
    scanf("%d",&data[j].age);
    printf("«•ÊM=man,F=woman[%d]",j);
    scanf("%s",&data[j].gender);
}

void person_print(person *data,int k)
{
    printf("name[%d]%s\n",k,data[k].name);
    printf("age    %d\n",data[k].age);
    printf("gender %s\n",data[k].gender);
}