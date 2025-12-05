#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 16)
	{
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
		n++;
	}
	putchar('\n');
	return (0);
}
