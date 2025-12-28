#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * print_error - prints Error and exits with status 98
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * multiply - performs multiplication of two number strings
 * @num1: first number string
 * @num2: second number string
 * @result: array to store result
 * @len1: length of num1
 * @len2: length of num2
 */
void multiply(char *num1, char *num2, int *result, int len1, int len2)
{
	int i, j, carry, n1, n2, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}
}

/**
 * print_result - prints the result array
 * @result: array containing result digits
 * @len: length of result array
 */
void print_result(int *result, int len)
{
	int i = 0;

	while (i < len && result[i] == 0)
		i++;
	if (i == len)
		_putchar('0');
	while (i < len)
	{
		_putchar(result[i] + '0');
		i++;
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i;
	int *result;

	if (argc != 3)
		print_error();
	num1 = argv[1];
	num2 = argv[2];
	if (!is_digit(num1) || !is_digit(num2))
		print_error();
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = calloc(len, sizeof(int));
	if (!result)
		return (1);
	multiply(num1, num2, result, len1, len2);
	i = 0;
	while (i < len && result[i] == 0)
		i++;
	if (i == len)
		printf("0");
	while (i < len)
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
