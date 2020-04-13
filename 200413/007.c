#include <stdio.h>

struct Student {
    int    num;
    double grade;
    int*   pi;
};

int main(void) {

    struct Student s1 = {1, 2.3}, s2 = {2, 3.4}, s3;

    int i = 0;
    s1.pi = &i;
    s2.pi = &i;
    s3.pi = &i;

    i = 2;

    s3 = s1;

    printf("%d\t%f\t%d\n", s1.num, s1.grade, *s1.pi);
    printf("%d\t%f\t%d\n", s2.num, s2.grade, *s2.pi);
    printf("%d\t%f\t%d\n", s3.num, s3.grade, *s3.pi);
    printf("%p\t%p\t%p", &s1, &s2, &s3);

    return 0;
}