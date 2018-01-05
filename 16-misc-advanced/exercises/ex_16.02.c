#include <stdlib.h>
#include <stdio.h>

struct entry {
    char word[15];
    char definition[50];
};

// Function to compare two character strings
int compare_strings (const char s1[], const char s2[])
{
    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] < s2[i])
        answer = -1;
    else if (s1[i] == s2[i])
        answer = 0;
    else
        answer = 1;

    return answer;
}

// Function to lookup a word inside a dictionary
int lookup (const struct entry dictionary[], const char search[], const int entries)
{
    int low = 0;
    int high = entries - 1;
    int mid, result;
    int compare_strings (const char s1[], const char s2[]);

    while (low <= high) {
        mid = (low + high) / 2;
        result = compare_strings (dictionary[mid].word, search);

        if (result == -1)
            low = mid + 1;
        else if (result == 1)
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}


int main(int argc, char *argv[])
{
    const struct entry dictionary[100] =
    { { "aardvark", "a burrow African mamal" },
        { "abyss", "a bottomless pit" },
        { "acumen", "mentally sharp; keen" },
        { "addle", "to become confused" },
        { "aerie", "a high nest" },
        { "affix", "to append; attach" },
        { "agar", "a jelly made from seaweed" },
        { "ahoy", "a nautical call of greeting" },
        { "aigrette", "an ornamental cluster of feathers" },
        { "ajar", "parpially opened" } };

    int entries = 10;
    int entryNumber;
    int lookup(const struct entry dictionary[], const char search[], const int entries);

    if (argc != 2) {
        fprintf(stderr, "No word typed on the command line.\n");
        return EXIT_FAILURE;
    }

    entryNumber = lookup(dictionary, argv[1], entries);

    if (entryNumber != -1)
        printf ("%s\n", dictionary[entryNumber].definition);
    else
        printf("Sorry, %s is not in my dictionary.\n", argv[1]);

    return EXIT_SUCCESS;
}
