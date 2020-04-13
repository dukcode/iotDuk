#include <stdio.h>
#include <stdlib.h>

int getFibonacci(int index) {

    if (index == 1 || index == 2) {
        return 1;
    }

    return getFibonacci(index - 1) + getFibonacci(index - 2);
}

int main(void) {
    int* ptr_i;
    int  index;

    scanf("%d", &index);

    ptr_i = (int*)malloc(index * sizeof(int));
    if (ptr_i == NULL) {
        printf("Memory Allocation Failed\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Memory Allocation Success\n");
    }

    for (int i = 0; i < index; ++i)
        ptr_i[i] = getFibonacci(i + 1);

    printf("{");
    for (int i = 0; i < index - 1; ++i)
        printf("%d, ", ptr_i[i]);
    printf("%d}\n", ptr_i[index - 1]);

    free(ptr_i);
    ptr_i = NULL;

    return 0;
}
