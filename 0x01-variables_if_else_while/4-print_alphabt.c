#include<stdio.h>
/**
  *main -> write lowercase alphabet except for q and e
  *
  *Return: 0 (Successful)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= z || ch != q || ch != e)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
