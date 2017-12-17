#include <stdio.h>

enum month { Janruary = 1, February, March, April, May, June,
    July, August, September, October, November, December };

char *month_name(enum month a_month);

int main()
{
    char *month_name(enum month a_month);
    enum month a_month;

    printf("Enter a month number: ");
    scanf("%i", &a_month);

    printf("%s\n", month_name(a_month));

    return 0;
}


char *month_name(enum month a_month)
{
    switch(a_month) {
        case Janruary:
            return "Janruary";
        case February:
            return "February";
        case March:
            return "March";
        case April:
            return "April";
        case May:
            return "May";
        case June:
            return "June";
        case July:
            return "July";
        case August:
            return "August";
        case September:
            return "September";
        case October:
            return "October";
        case November:
            return "November";
        case December:
            return "December";
        default:
            return "bad month number";
    }
}
