#include "main.h"
#include <unistd.h>

/**
* _putchar - entry point.  prints char
* @c: char being evaluated
* Return: Always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
