// 
// Exercise 10.10
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int compare_string(char *s1, char *s2) {
    int answer;

    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }

    if (*s1 < *s2)
        answer = -1;
    else if (*s1 == *s2)
        answer = 0;
    else
        answer = 1;

    return answer;
}

int main() {
    int i, found = 0;
    char *words[] = { "aardvark", "abyss", "acumen", "addle", "aerie",
        "affix", "agar", "ahoy", "aigrette", "ajar" };
    char *search = "aigrette";

    for (i = 0; i < 10; i++)
        if (compare_string(search, words[i]) == 0) {
            found = 1;
            break;
        }

    if (found)
        printf("Found.\n");
    else
        printf("Not Found.\n");

    return 0;
}
