#include <stdio.h>

void   inputData(int*, int*);
double getAverage(int, int);

int main(void) {
    int    a;
    int    b;
    double avg;

    inputData(&a, &b);
    avg = getAverage(a, b);
    printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

    return 0;
}