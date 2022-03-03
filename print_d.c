#include "main.h"
  
/**
 * print_d - prints decimal
 * @d: decimal
 * Return: chars + nums
 */

int print_d(va_list d)
{
        int a[10];
        int x, y, z, sum, count;

        z = va_arg(d, int);
        count = 0;
        y = 1000000000;
        a[0] = z / y;
        for (x = 1; x < 10; x++)
        {
                y /= 10;
                a[x] = (z / y) % 10;
        }
        if (z < 0)
        {
                _putchar('-');
                count++;
                for (x = 0; x < 10; x++)
                        a[x] *= -1;
        }
        for (x = 0, sum = 0; x < 10; x++)
        {
                sum += a[x];
                if (sum != 0 || x == 9)
                {
                        _putchar('0' + a[x]);
                        count++;
                }
        }
        return (count);
}
