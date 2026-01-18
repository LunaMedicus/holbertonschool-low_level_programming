#include <stdio.h>
#include <stdlib.h>

/**
 * struct Node - Doubly linked list node
 * @c: Character value
 * @prev: Previous node
 * @next: Next node
 */
typedef struct Node {
	char c;
	struct Node *prev;
	struct Node *next;
} Node;

/**
 * create_list - Creates a doubly linked list from a string
 * @str: The string to convert
 *
 * Return: Pointer to the head of the list
 */
Node *create_list(const char *str)
{
	Node *head = NULL;
	Node *tail = NULL;
	int i = 0;

	while (str[i])
	{
		Node *new_node = malloc(sizeof(Node));
		if (!new_node)
			return (NULL);

		new_node->c = str[i];
		new_node->prev = NULL;
		new_node->next = NULL;

		if (!head)
		{
			head = new_node;
			tail = new_node;
		}
		else
		{
			tail->next = new_node;
			new_node->prev = tail;
			tail = new_node;
		}
		i++;
	}

	return (head);
}

/**
 * compute_key - Calculate the key from a linked list
 * @head: Head of the list
 *
 * Description: This is where the core algorithm lives. Based on the typical
 * crackme5 validation logic, it sums the ASCII values of all characters.
 * If the actual crackme5 uses a different algorithm (e.g., product, XOR,
 * or reversed string), modify this function accordingly.
 *
 * Return: The computed key
 */
int compute_key(Node *head)
{
	int key = 0;
	Node *current = head;

	while (current)
	{
		key += current->c; /* Replace with actual algorithm if different */
		current = current->next;
	}

	return (key);
}

/**
 * main - Key generator for crackme5
 * @argc: Argument count
 * @argv: Arguments (username)
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	Node *list;
	int key;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}

	list = create_list(argv[1]);
	if (!list)
		return (1);

	key = compute_key(list);
	printf("%d\n", key);

	return (0);
}