#include<stdio.h>
/**
  *main -> prints alphabet in lowercase, then in uppercase
  *
  *Return: 0 (sucsses)
  */
int main(void)
{
	char cl;
	char cu;

	for (cl = 'a'; cl <= 'z'; cl++)
		putchar(cl);
	for (cu = 'A'; cu <= 'Z'; cu++)
		putchar(cu);
	putchar('\n');
	return (0);
}
