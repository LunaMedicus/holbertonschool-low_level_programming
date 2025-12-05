#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 7; n++)
	{
		putchar(n + '0');
		putchar(n + 1 + '0');
		putchar(n + 2 + '0');
		if (n != 7)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
