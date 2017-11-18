// 
// Exercise 8.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};


int main() {
    struct time time_1, time_2, time;
    struct time elapsed_time(struct time from, struct time to);

    printf("Enter time 1 (hh:mm:ss): ");
    scanf("%i:%i:%i", &time_1.hour, &time_1.minutes, &time_1.seconds);

    printf("Enter time 2 (hh:mm:ss): ");
    scanf("%i:%i:%i", &time_2.hour, &time_2.minutes, &time_2.seconds);

    time = elapsed_time(time_1, time_2);

    printf("Elapsed time: %i hours, %i minutes, %i seconds.\n",
            time.hour, time.minutes, time.seconds);

    return 0;
}


// Return time represents elapsed time between 2 given times

struct time elapsed_time(struct time from, struct time to) {
    struct time time;
    int hours, minutes, seconds;
    int s1, s2, diff;
    int time_to_seconds(struct time time);

    s1 = time_to_seconds(from);
    s2 = time_to_seconds(to);
    diff = (s2 > s1) ? (s2 - s1) : (24 * 3600 + s2 - s1);

    hours = diff / 3600;
    minutes = (diff - hours * 3600) / 60;
    seconds = diff - hours * 3600 - minutes * 60;

    time = (struct time) { hours, minutes, seconds };

    return time;
}


// Convert time to elapsed seconds since midnight

int time_to_seconds(struct time time) {
    int seconds;

    seconds = time.hour * 3600 + time.minutes * 60 + time.seconds;

    return seconds;
}
