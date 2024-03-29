#include <memory.h>
#include <stdio.h>

int main(void)
{
    int array1[] = { 42, 79, 13, 19, 41 , 22, 99};
    int array2[] = { 1, 2, 3, 4, 5 , 6 , 7};
    int i;
    
    for (i = 0; i < sizeof(array1) + 1 / sizeof(array1[0]); i++) {
        printf("array1[%d] = %d\n", i, array1[i]);
    }

    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    memcpy(array2, array1, sizeof(array1)); /* array1 の全要素を array2 にコピー */

    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}