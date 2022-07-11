#include "main.h"
#include <unistd.h>

/**
 * _putchar - function for printing
 * @c: value 
 * Return: the input character and one extra byte
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
