#include "main.h"
  
/**
 * hex_print - prints hex in ascii value
 * @c: char
 * Return: count
 */

static int print_i(char c)
{
        int count;
        char diff = 'A' - ':';
        char d[2];

        d[0] = c / 16;
        d[1] = c % 16;
        for (count = 0; count < 2; count++)
        {
                if (d[count] >= 10)
                        _putchar('0' + diff + d[count]);
                else
                        _putchar('0' + d[count]);
        }
        return (count);
}
