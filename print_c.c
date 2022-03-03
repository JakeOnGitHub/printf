#include "main.h"
  
/** 
 * print_c - char
 * @c: char to print
 * Return: 1
 */

int print_c(va_list c)
{
        char ch = (char)va_arg(c, int);

        _putchar(ch);
        return(1);
}
