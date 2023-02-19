#include<stdio.h>
/**
 *main -> Write a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n')
	return (0);
}
