#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //배열 포인터 동적할당
    int(*pa)[5];  //int [4][5]

    pa = (int(*)[5])malloc(sizeof(int) * 4 * 5);

    memset(pa, 0, sizeof(int) * 4 * 5);
    //or calloc()

    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 5; ++j)
            printf("%d\n", pa[i][j]);

    free(pa);

    return 0;
}