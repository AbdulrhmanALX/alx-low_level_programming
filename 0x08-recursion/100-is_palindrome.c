#include "main.h"
/**
  * is_palindrome(char *s) - check if the string \
  				is palindrome
  * @s: the string
  * Return: 1 0r 0
  */

int is_palindrome(char *s)
{
	int i;
	if (*s == '0')
		return 0;
	else
		is_palindrome(s+1);
	i = 0;
	if (*s != s[i++])
		return 0;

	return 1;
}
