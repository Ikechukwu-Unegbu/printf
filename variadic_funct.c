#include <stdio.h>
#include <stdarg.h>
/**
 * variadic_funct - function point
 * @count: input
 * Return: Always 0 (Success)
 */
void variadic_funct(int count)
{
	va_list args;
	int i;
	va_start(args, count);
	printf("variadic : argument count = %d\n", count);
	for (i = 0; i < count; i++)
	{
		printf("argument %d = %d, ", i + 1, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
