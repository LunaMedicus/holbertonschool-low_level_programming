#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z';)
	{
	putchar(c);
	c++;
	putchar(toupper(c));
	c++;
	}
	putchar('\n');

	return (0);
}
