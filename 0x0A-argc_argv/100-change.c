# include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - return changes
  * @argc: arguments count
  * @argv: arguments vector
  * Return: 0 on success error otherwise
  */

int main(int argc, char **argv)
{
	int x, i = 0;
	char *e;

	x = strtol(argv[1], &e, 10);
	if (argc != 2 || *e)
	{
		printf("Erorr\n");
		return (1);
	}
	if (x <= 0)
		printf("0\n");
	else
	{
		for (; x >= 25; i++)
			x -= 25;
		for (; x >= 10; i++)
			x -= 10;
		for (; x >= 5; i++)
			x -= 5;
		for (; x >= 2; i++)
			x -= 2;
		for (; x >= 1; i++)
			x -= 1;
		printf("%d\n", i);
	}
	return (0);
}
