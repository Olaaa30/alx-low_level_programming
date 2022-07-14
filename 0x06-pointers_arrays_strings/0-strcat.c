#include "main.h"

/**
 * _strcat - concatenate two strings together
 * @dest: destination
 * @src: source
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	return (dest);
}
