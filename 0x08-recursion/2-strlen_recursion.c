#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *g)
{
	int i = 0;

	if (*g)
	{
		i++;
		i += _strlen_recursion(g + 1);

	}
	return (i);
}
