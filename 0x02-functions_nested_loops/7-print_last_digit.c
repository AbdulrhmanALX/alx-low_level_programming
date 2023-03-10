#include "main.h"

/*
 *print_last_digit - Prints the last digit of a number.
 *
 *@n: the number checked
 *
 *Return: the value of las digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last *= -1;

	_putchar(last + '0');
	return (last);
}
