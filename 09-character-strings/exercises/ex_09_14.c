// 
// Exercise 9.14
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void int_to_str(const int number, char str[]) {
    int i, j, digit, n;
    char temp[20];

    // store each digit of `number` as character on `temp` in reversed order,
    // include sign if any
    if (number < 0)
        n = -number;
    else
        n = number;

    i = 0;
    do {
        digit = n % 10;
        temp[i] = '0' + digit;
        n = n / 10;
        i++;
    } while (n != 0);
    
    if (number < 0)
        temp[i] = '-';
    else
        i--;

    // copy each character from `temp` to result string, from last index to first
    j = 0;
    while (i >= 0) {
        str[j] = temp[i];
        j++;
        i--;
    }

    str[j] = '\0';
}


int main() {
    char s1[20];
    char s2[20];
    void int_to_str(const int number, char str[]);

    int_to_str(123, s1);
    printf("%s\n", s1);

    int_to_str(-456, s2);
    printf("%s\n", s2);

    return 0;
}
