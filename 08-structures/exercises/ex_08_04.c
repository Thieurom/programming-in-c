// 
// Exercise 8.4
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
    struct date date;
    void weekday(struct date date);

    printf("Enter a date (mm dd yyyy): ");
    scanf("%i%i%i", &date.month, &date.day, &date.year);

    printf("It's ");
    weekday(date);
    printf("\n");

    return 0;
}


void weekday(struct date date) {
    int weekday_num;
    int n_days(struct date date); 

    weekday_num = (n_days(date) - 621049) % 7;

    switch (weekday_num) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }
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
