#include "main.h"
/**
 * main - check alphabet
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: Always (0)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
