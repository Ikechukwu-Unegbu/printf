#include "main.h"
#include <stdlib.h>

/**
 * print_ch - prints out a char
 * @c: char input to print
 *
 * Return: always 1
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_string - this function prints a string
 * @s: string input to print
 *
 * Return: number of chars printed in runtime
 */
int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * hexa_pring - prints a char's ascii value in uppercase hexadecimal
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
static int hexa_print(char c)
{
	int counter;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (counter = 0; counter < 2; counter++)
	{
		if (d[counter] >= 10)
			_putchar('0' + diff + d[counter]);
		else
			_putchar('0' + d[counter]);
	}
	return (counter);
}

/**
 * super_print - function to print a string and nonprintable 
 * character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */
int super_print(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * string_reverse - prints a string in reverse
 * @r: string to print
 *
 * Return: number of chars printed
 */
int string_reverse(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
