// 
// Exercise 9.12
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

float str_to_float(const char str[]) {
    int i, int_value, decimal = 0, start = 0, ten_power = 1;
    float result = 0.0;

    if (str[0] == '-')
        start = 1;

    i = start;
    while (str[i] != '\0') {
        if (decimal)
            ten_power *= 10;

        if (str[i] >= '0' && str[i] <= '9') {
            int_value = str[i] - '0';
            result = result * 10 + int_value;

        } else if (str[i] == '.') {
            decimal = 1;
        }

        i++;
    }

    if (start == 1)
        return -result / ten_power;

    return result / ten_power;
}


int main() {
    float str_to_float(const char str[]);

    printf("%g\n", str_to_float(".123"));
    printf("%g\n", str_to_float("-456.789"));

    return 0;
}
