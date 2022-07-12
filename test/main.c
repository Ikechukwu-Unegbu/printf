#include <limits.h>
#include "../main.h"
#include <stdio.h>
int main(void)
{
	_printf("Character Test:[%c]\n", 'H');
	printf("Character Test:[%c]\n", 'H');
	_printf("String test:[%s]\n", "I am a string test !");
	printf("String test:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
