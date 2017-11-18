// 
// Exercise 8.2
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};


int main() {
    struct date date_1, date_2;
    int elapsed_days(struct date d1, struct date d2);

    printf("Enter two dates (mm dd yyyy):\n");

    printf("Date 1: ");
    scanf("%i%i%i", &date_1.month, &date_1.day, &date_1.year);

    printf("Date 2: ");
    scanf("%i%i%i", &date_2.month, &date_2.day, &date_2.year);

    printf("Number of days between two dates is %i\n", elapsed_days(date_1, date_2));

    return 0;
}


int elapsed_days(struct date d1, struct date d2) {
    int days, n1, n2;
    int n_days(struct date d);

    n1 = n_days(d1);
    n2 = n_days(d2);

    days = (n1 > n2) ? (n1 - n2) : (n2 - n1);

    return days;
}


int n_days(struct date date) {
    int f, g, d, n;
    int month, day, year;

    month = date.month;
    day = date.day;
    year = date.year;

    if (month <= 2) {
        f = year - 1;
        g = month + 13;
    } else {
        f = year;
        g = month + 1;
    }
    
    n = 1461 * f / 4 + 153 * g / 5 + day;

    return n;
}
