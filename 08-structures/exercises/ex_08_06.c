// 
// Exercise 8.6
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


int main() {
    struct date date_update(struct date this_day);
    struct date this_day, next_day;

    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &this_day.month, &this_day.day, &this_day.year);

    next_day = date_update(this_day);

    printf("Tomorrow's date is %i/%i/%.2i.\n", next_day.month, next_day.day, next_day.year);

    return 0;
}


// Return the date after given date

struct date date_update(struct date this_day) {
    struct date next_day;
    int number_of_days(struct date date);

    if (this_day.day != number_of_days(this_day)) {
        next_day = (struct date) { this_day.month, this_day.day + 1, this_day.year };

    } else if (this_day.month == 12) {
        next_day = (struct date) { 1, 1, this_day.year + 1 };

    } else {
        next_day = (struct date) { this_day.month + 1, 1, this_day.year };
    }

    return next_day;
}


// Return the number of days in a month

int number_of_days(struct date date) {
    int days;
    bool is_leap_year(struct date date);
    const int days_per_month[12] =
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if (is_leap_year(date) && date.month == 2)
        days = 29;
    else
        days = days_per_month[date.month - 1];

    return days;
}


// Given a date, return true if it's a leap year, false otherwise

bool is_leap_year(struct date date) {
    bool leap_year_flag;

    if ((date.year % 4 == 0 && date.year % 100 != 0) ||
            date.year % 400 == 0)
        leap_year_flag = true;
    else
        leap_year_flag = false;

    return leap_year_flag;
}
