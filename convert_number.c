#include "main.h"
/**
 * convert_binary - function that convert decimal number to binary
 * @n : number to be converted
 * Return: Number of characters that has been printed
 */
int convert_binary(unsigned int n)
{
	unsigned int arr[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	int check = 0, count = 0, i;

	for (i = 0; i < 8; i++)
	{

		if (n / arr[i] > 0)
		{
			check = 1;
			__putchar('1');
			count++;
			n = n - arr[i];
		}
		else
		{
			if (check == 0)
				continue;
			__putchar('0');
			count++;
		}
	}
	return (count);
}
