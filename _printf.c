#include "main.h"
#include <stdlib.h>
/**
 * get_format_printer - checks if there is a valid format
 * and returns the right function to handle it.
 * @format: possible format
 *
 * Return: pointer to right function or NULL
 */
static int (*get_format_printer(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"u", print_unsigned},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"p", print_address},
		{"S", super_print},
		{"r", string_reverse},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, sum = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			sum++;
		}
		if (!format[i])
			return (sum);
		f = get_format_printer(&format[i + 1]);
		if (f != NULL)
		{
			sum += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		sum++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (sum);
}
