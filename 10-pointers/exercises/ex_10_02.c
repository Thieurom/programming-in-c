// 
// Exercise 10.2
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
    struct entry n1, n2, n3, n2_3;
    struct entry *list = &n1;
    void insert_entry(struct entry *list, struct entry *after);

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;

    n2_3.value = 250;

    insert_entry(&n2_3, &n2);

    while (list != 0) {
        printf("%i\n", list->value);
        list = list->next;
    }

    return 0;
}
