// 
// Exercise 10.6
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

struct entry {
    int value;
    struct entry *prev;
    struct entry *next;
};

void insert_entry(struct entry *entry, struct entry *location) {
    entry->prev = location;
    entry->next = location->next;
    location->next = entry;
}

void remove_entry(struct entry *entry) {
    (entry->next)->prev = entry->prev;
    (entry->prev)->next = entry->next;
}

void display_entries(struct entry *list) {
    while (list != 0) {
        printf("%i  ", list->value);
        list = list->next;
    }

    printf("\n");
}

int main() {
    struct entry n1, n2, n3, n2_3;
    struct entry *list = &n1;
    void insert_entry(struct entry *entry, struct entry *location);
    void remove_entry(struct entry *entry);
    
    n1.value = 100;
    n1.prev = 0;
    n1.next = &n2;

    n2.value = 200;
    n2.prev = &n1;
    n2.next = &n3;

    n3.value = 300;
    n3.prev = &n2;
    n3.next = 0;

    printf("Current list (n1 n2 n3):\n");
    display_entries(&n1);

    n2_3.value = 250;
    insert_entry(&n2_3, &n2);
    printf("\nList after inserting n2_3 after n2:\n");
    display_entries(&n1);

    remove_entry(&n2);
    printf("\nList after removing n2:\n");
    display_entries(&n1);

    return 0;
}
