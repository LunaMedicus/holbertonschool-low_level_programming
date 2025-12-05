#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	return (0);
}
