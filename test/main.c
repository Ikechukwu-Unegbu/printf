#include <limits.h>
#include "../main.h"
#include <stdio.h>
int main(void)
{
	_printf("Character Test:[%c]\n", 'H');
	printf("Character Test:[%c]\n", 'H');
	_printf("String Test:[%s]\n", "I am a string !");
	printf("String Test:[%s]\n", "I am a string !");

	return (0);
}
