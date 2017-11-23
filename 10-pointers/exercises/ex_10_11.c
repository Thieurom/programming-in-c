// 
// Exercise 10.11
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

void date_update(struct date *today) {
    int number_of_days(struct date d);
    
    if (today->day != number_of_days(*today)) {
        today->day += 1;
    } else if (today->month == 12) {
        today->day = 1;
        today->month = 1;
        today->year += 1;
    } else {
        today->day = 1;
        today->month += 1;
    }
}

int number_of_days(struct date d) {
    int days;
    bool is_leap_year(struct date d);
    const int days_per_month[12] = 
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (is_leap_year(d) && d.month == 2)
        days = 29;
    else
        days = days_per_month[d.month - 1];

    return days;
}

bool is_leap_year(struct date d) {
    bool leap_year_flag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) ||
            d.year % 400 == 0)
        leap_year_flag = true;
    else
        leap_year_flag = false;

    return leap_year_flag;
}

int main() {
    void date_update(struct date *today);
    struct date this_day;

    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &this_day.month, &this_day.day, &this_day.year);

    date_update(&this_day);
    printf("Tomorrow's date is %i/%i/%.2i.\n", this_day.month, this_day.day, this_day.year % 100);

    return 0;
}
