#include <stdio.h>  // printf, scanf �Լ� ����� ���� �ʿ�

void inputData(int* pa, int* pb)  // �� ���� �Է� �Լ�
{
    printf("�� ���� �Է� : ");
    scanf("%d%d", pa, pb);
}

double getAverage(int a, int b)  // ����� ���ϴ� �Լ�
{
    int    tot;
    double avg;

    tot = a + b;
    avg = tot / 2.0;

    return avg;
}