#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function to print
 * @c: Input value
 * Return: the success code, address of input value and 1 byte
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
