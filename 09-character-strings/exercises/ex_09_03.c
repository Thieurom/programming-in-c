// 
// Exercise 9.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

bool word_character(const char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\''))
        return true;
    else
        return false;
}

bool number_character(const char c) {
    if ((c >= '0' && c <= '9') || c == '.' || c == ',' || c == '-')
        return true;

    return false;
}

int count_words(const char string[]) {
    int i, word_count = 0;
    bool looking_for_group = true;
    bool word_character(const char c);
    bool number_character(const char c);

    for (i = 0; string[i] != '\0'; ++i)
        if (word_character(string[i]) || number_character(string[i])) {
            if (looking_for_group) {
                ++word_count;
                looking_for_group = false;
            }
        } else
            looking_for_group = true;

    return word_count;
}

int main() {
    const char text1[] = "I'm a software engineer.";
    const char text2[] = "Here are the best apps of 2017.";
    int count_words(const char string[]);

    printf("%s - words = %i\n", text1, count_words(text1));
    printf("%s - words = %i\n", text2, count_words(text2));

    return 0;
}
