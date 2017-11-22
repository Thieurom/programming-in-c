// 
// Exercise 10.4
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void remove_entry(struct entry *entry) {
    entry->next = entry->next->next;
}

void display_entries(struct entry *list) {
    while (list != 0) {
        printf("%i\n", list->value);
        list = list->next;
    }
}

int main() {
    struct entry n1, n2, n3, head;
    struct entry *list;
    void remove_entry(struct entry *entry);
    void display_entries(struct entry *list);

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;

    head.next = &n1;
    list = head.next;

    printf("Current list:\n");
    display_entries(list);

    remove_entry(&n1);

    printf("\nRemoving second entry:\n");
    display_entries(list);

    remove_entry(&head);

    list = head.next;    // update head
    printf("\nRemoving first entry:\n");
    display_entries(list);

    return 0;
}
