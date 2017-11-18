// 
// Exercise 8.5
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

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct date_and_time {
    struct date date;
    struct time time;
};


int main() {
    struct date_and_time dt, next;
    struct date_and_time clock_keeper(struct date_and_time dt);

    printf("Enter date and time:\n");
    printf("date (mm dd yyyy): ");
    scanf("%i%i%i", &dt.date.month, &dt.date.day, &dt.date.year);

    printf("time (hh:mm:ss): ");
    scanf("%i:%i:%i", &dt.time.hour, &dt.time.minutes, &dt.time.seconds);

    printf("\nCurrent time is %i/%i/%.2i %.2i:%.2i:%.2i\n",
            dt.date.month, dt.date.day, dt.date.year % 100,
            dt.time.hour, dt.time.minutes, dt.time.seconds);

    next = clock_keeper(dt);

    printf("Updated time is %i/%i/%.2i %.2i:%.2i:%.2i\n",
            next.date.month, next.date.day, next.date.year % 100,
            next.time.hour, next.time.minutes, next.time.seconds);

    return 0;
}


// Update datetime of given datetime

struct date_and_time clock_keeper(struct date_and_time dt) {
    struct date_and_time next;
    struct date date_update(struct date this_day);
    struct time time_update(struct time time);

    next.time = time_update(dt.time);

    if (next.time.hour == 0 && next.time.minutes == 0 && next.time.seconds == 0)
        next.date = date_update(dt.date);
    else
        next.date = dt.date;

    return next;
}


// Return the date after given date

struct date date_update(struct date this_day) {
    struct date next_day;
    int number_of_days(struct date date);

    if (this_day.day != number_of_days(this_day)) {
        next_day.day = this_day.day + 1;
        next_day.month = this_day.month;
        next_day.year = this_day.year;

    } else if (this_day.month == 12) {
        next_day.day = 1;
        next_day.month = 1;
        next_day.year = this_day.year + 1;

    } else {
        next_day.day = 1;
        next_day.month = this_day.month + 1;
        next_day.year = this_day.year;
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


// Update the time by one seconds

struct time time_update(struct time time) {
    ++time.seconds;

    if (time.seconds == 60) {
        time.seconds = 0;
        ++time.minutes;

        if (time.minutes == 60) {
            time.minutes = 0;
            ++time.hour;

            if (time.hour == 24)
                time.hour = 0;
        }
    }

    return time;
}
