#include <stdio.h>

//�������� �⺻�뷮 2GB
int ggg[4][0x10000] = {0};

int main(void) {

    // 0x1         => 1
    // 0x10        => 16
    // 0x100       => 256
    // 0x1000      => 4K
    // 0x10000     => 64KB
    // 0x100000    => 1MB

    //stack �⺻ �뷮 = 256KB
    int lll[4][0x10000];

    printf("%d\n", sizeof lll);

    return 0;
}