#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
