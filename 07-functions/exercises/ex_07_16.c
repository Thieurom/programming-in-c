// 
// Exercise 7.16
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int converted_number[64];
long int number_to_convert;
int base;
int digit = 0;

void get_number_and_base (void)
{
    printf ("Number to be converted? ");
    scanf ("%li", &number_to_convert);

    if (number_to_convert != 0)
        do {
            printf ("Base? ");
            scanf ("%i", &base);

            if ( base < 2 || base > 16 )
                printf ("Bad base - must be between 2 and 16\n");
            else
                break;
        } while (1);
}

void convert_number (void)
{
    do {
        converted_number[digit] = number_to_convert % base;
        ++digit;
        number_to_convert /= base;
    } while ( number_to_convert != 0 );
}

void display_converted_number (void)
{
    const char base_digits[16] =
    { '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int next_digit;

    printf ("Converted number = ");

    for (--digit; digit >= 0; --digit ) {
        next_digit = converted_number[digit];
        printf ("%c", base_digits[next_digit]);
    }

    printf ("\n");
}

void reset(void)
{
    int i;

    for (i = 0; i < 64; ++i)
        converted_number[i] = 0;

    digit = 0;
}

int main (void)
{
    void get_number_and_base (void);
    void convert_number (void);
    void display_converted_number (void);
    void reset(void);

    do {
        get_number_and_base ();

        if (number_to_convert != 0) {
            convert_number ();
            display_converted_number ();
            reset ();
            printf("\n");
        } else {
            break;
        }
    } while (1);

    return 0;
}
