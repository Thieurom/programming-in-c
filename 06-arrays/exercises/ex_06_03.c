// 
// Exercise 6.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int rating_counters[11], i, response;

    for (i = 1; i <= 10; ++i)
        rating_counters[i] = 0;

    printf("Enter your responses (999 to finish)\n");

    do {
        scanf("%i", &response);

        if (response == 999)
            break;
        else if (response < 1 || response > 10)
            printf("Bad response: %i\n", response);
        else
            ++rating_counters[response];
    } while (1);

    printf("\nRating   Number of Responses\n");
    printf("------   -------------------\n");

    for (i = 1; i <= 10; ++i)
        printf("%4i%14i\n", i, rating_counters[i]);

    return 0;
}
