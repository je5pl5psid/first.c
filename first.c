#include <stdio.h>

int main(void)
{


int a , b , c , i;
a = 0;
b = 1;
for(i = 1 ;  i <= 47; i++){
c = b + a;
a = b;



printf("%05d‰ñ–Ú %d\n",i,b);
b = c;


}
return 0;
}