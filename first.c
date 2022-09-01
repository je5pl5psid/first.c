#include <stdio.h>

int main(void)
{
    int milk ,water,money ,change ,kane;
    milk = 138;
    water = 198;
    money = (milk*2 + water)*1.05;
    kane = 1000;
    printf("%d",kane - money);
    return 0;
}