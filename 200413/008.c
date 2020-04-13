#include <stdio.h>

struct List {
    int          num;
    struct List* next;
};

int main(void) {
    struct List a = {10, NULL};
    struct List b = {20, NULL};
    struct List c = {30, NULL};

    struct List* head = &a;
    struct List* current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("List all : ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");

    return 0;
}