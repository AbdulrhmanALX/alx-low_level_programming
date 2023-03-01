#include "main.h"

/**
 * _strcat - concat 2 string until n of the 2nd string
 * @dest:char
 * @src:char
 * @n: the number of returned characters of 2nd string * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int k = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && k < n)
	{
		*dest = *src;
		dest++;
		src++;
		k++;
	}
	*dest = '\0';
	return (s);
}
