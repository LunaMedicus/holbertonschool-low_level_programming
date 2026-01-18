#include "main.h"

/**
 * print_rev - print a string
 * @s:pointer char
 * return:void
 */
void print_rev(char *s)
{
	char *end = s;
	while (*end)
		end++;
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
