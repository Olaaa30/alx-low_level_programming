#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a letter is an uppercase letter
 * @c: charcter to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
