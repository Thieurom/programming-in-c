// 
// Exercise 9.11
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int str_to_int(const char str[]) {
    int i, int_value;
    int start = 0, result = 0;

    if (str[0] == '-')
        start = 1;

    for (i = start; str[i] >= '0' && str[i] <= '9'; i++) {
        int_value = str[i] - '0';
        result = result * 10 + int_value;
    }

    if (start == 1)
        return -result;

    return result;
}


int main() {
    int str_to_int(const char str[]);

    printf("%i\n", str_to_int("123"));
    printf("%i\n", str_to_int("-456"));

    return 0;
}
