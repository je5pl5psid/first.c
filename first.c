#include <stdio.h>
int main(void)
{
    char c[64];
    char d[32];
    printf ("put in first name:");
    scanf("%32s",c);
    printf("put in second name:");
    scanf("%64s",d);
    printf("%s %s" ,c,d);
    return 0;


}