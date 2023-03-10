#include "main.h"
/**
  *print_triangle - prints pyramid
  *@size: size of the pyramid
  *Resturn: void
  */
void print_triangle(int size)
{
	int i;
	int j;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = size; i > 0; i--)
		{
			for (j = i - 1; j > 0; j--)
				_putchar(' ');
			for (z = size; z > i - 1; z--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
