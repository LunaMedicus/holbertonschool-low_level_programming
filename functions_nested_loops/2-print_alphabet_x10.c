#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times, each on a new line
* Description: This function prints the lowercase alphabet (a-z) ten times,
* with each iteration on a new line using _putchar.
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
