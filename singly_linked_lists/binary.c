#include <stdio.h>

/**
* binary_search - Searches for an item in a sorted array using binary search
* @arr: The sorted array to search
* @high: The highest index in the array to search
* @item: The item to search for
*
* Return: The index of the item if found, otherwise -1
*/
int binary_search(int arr[], int high, int item)
{
	int low = 0;

	int mid;
	int guess;


	while (low <= high)
	{

		mid = (low + high) / 2;

		guess = arr[mid];

		if (guess == item)

			return (mid);

		else if (guess < item)

			low = mid + 1;

		else

			high = mid - 1;

	};
	return (-1);
}
/**
* main - Entry point for testing the binary_search function
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};

	int high = sizeof(arr) / sizeof(arr[0]) - 1;

	int item = 9;

	int a = binary_search(arr, high, item);

	return (0);
}

