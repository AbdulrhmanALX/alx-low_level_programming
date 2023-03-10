#include "main.h"
/**
  *more_numbers - prints o to 14
  *Return: void
  */
void more_numbers(void)
{
	int i;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar('1');
			_putchar(y % 10 + '0');
		}
	_putchar('\n');
	}
}
