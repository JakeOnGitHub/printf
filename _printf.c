#include "main.h"

/**
 * _specifiers - checks format specifier
 * @format: format specifier being
 *
 * Return: pointer to valid function or NULL
 */
static int (*_specifiers(const char *format))(va_list)
{
	unsigned int x;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (x = 0; p[x].t != NULL; x++)
	{
		if (*(p[x].t) == *format)
		{
			break;
		}
	}
	return (p[x].f);
}

/**
 * _printf - prints everything
 * @format: list of argument types passed
 *
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	unsigned int x = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[x])
	{
		for (; format[x] != '%' && format[x]; x++)
		{
			_putchar(format[x]);
			count++;
		}
		if (!format[x])
			return (count);
		f = _specifiers(&format[x + 1]);
		if (f != NULL)
		{
			count += f(valist);
			x += 2;
			continue;
		}
		if (!format[x + 1])
			return (-1);
		_putchar(format[x]);
		count++;
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(valist);
	return (count);
}
