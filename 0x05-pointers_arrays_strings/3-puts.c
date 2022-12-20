#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
    int a = 0; /*count from 0*/
    for (; *s++;)
	    a++;
    return (a);

}
