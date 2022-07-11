#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_ch(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_unsigned(va_list u);
int print_binary(va_list b);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_address(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
int print_buf(char *buf, unsigned int nbuf);

#endif
