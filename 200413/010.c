#include <stdio.h>

void   inputData(int*, int*);
double getAverage(int, int);

int main(void) {
    int    a;
    int    b;
    double avg;

    inputData(&a, &b);
    avg = getAverage(a, b);
    printf("%d¿Í %dÀÇ Æò±Õ : %.1lf\n", a, b, avg);

    return 0;
}