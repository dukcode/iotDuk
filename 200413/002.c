#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int*    ptr_i;
    double* ptr_d;

    ptr_i = (int*)malloc(sizeof(int));
    if (ptr_i == NULL) {
        printf("Memory Allocation Failed\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Memory Allocation Success\n");
    }

    ptr_d = (double*)malloc(sizeof(double));
    if (ptr_d == NULL) {
        printf("Memory Allocation Failed\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Memory Allocation Success\n");
    }

    free(ptr_i);
    ptr_i = NULL;
    free(ptr_d);
    ptr_d = NULL;

    return 0;
}
