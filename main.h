#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct print - accepts and creates handler functions
* @y: char pointer
* @z: fuction pointer
*/

typedef struct print
{
	char *y;
	int (*z)(va_list);
} print_x;

int _printf(const char *format, ...);
int _putchar(char c);
int print_d(va_list);
int print_c(va_list);
int print_s(va_list);
int print_i(va_list);

#endif /* MAIN_H */
