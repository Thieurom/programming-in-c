// 
// Exercise 9.10
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <string.h>

struct entry {
    char word[15];
    char definition[50];
};

int main() {
    struct entry dictionary[100] =
    { { "aardvark", "a burrow African mamal" },
        { "abyss", "a bottomless pit" },
        { "aigrette", "an ornamental cluster of feathers" },
        { "addle", "to become confused" },
        { "aerie", "a high nest" },
        { "acumen", "mentally sharp; keen" },
        { "agar", "a jelly made from seaweed" },
        { "ahoy", "a nautical call of greeting" },
        { "affix", "to append; attach" },
        { "ajar", "parpially opened" } };

    int i;
    void dictionary_sort(struct entry dictionary[], int length);

    printf("Words before sorting:\n");
    for (i = 0; i < 10; i++)
        printf("%s  ", dictionary[i].word);

    printf("\n");

    dictionary_sort(dictionary, 10);

    printf("\nWords after sorting:\n");
    for (i = 0; i < 10; i++)
        printf("%s  ", dictionary[i].word);

    printf("\n");

    return 0;
}


void dictionary_sort(struct entry dictionary[], int length) {
    struct entry e1, e2;
    int i, j;
    char s1[15], s2[15];

    for (i = 1; i < length; i++) {
        for (j = i; j > 0; j--) {
            e1 = dictionary[j];
            e2 = dictionary[j - 1];

            if (strcmp(e1.word, e2.word) < 0) {
                dictionary[j] = e2;
                dictionary[j - 1] = e1;
            }
        }
    }
}
