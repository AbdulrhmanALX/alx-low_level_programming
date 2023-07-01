#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - ...
  * @s: ...
  *
  * Return: ...
  */
int (*get_op_func(char *s))(int, int)
{
	char *op[5] = {"+", "-", "*", "/", "%"};
	int i = 0;

	while (i < 5)
	
