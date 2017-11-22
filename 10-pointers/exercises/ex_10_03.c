// 
// Exercise 10.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void insert_entry(struct entry *entry, struct entry *location) {
    entry->next = location->next;
    location->next = entry;
}


int main() {
    struct entry n1, n2, n3, n0, head;
    struct entry *list;
    void insert_entry(struct entry *entry, struct entry *location);

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;

    n0.value = 10;
    head.next = &n1;

    insert_entry(&n0, &head);

    list = head.next;
    while (list != 0) {
        printf("%i\n", list->value);
        list = list->next;
    }

    return 0;
}
