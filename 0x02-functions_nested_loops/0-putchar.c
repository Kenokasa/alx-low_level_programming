#include "main.h" 

/**
 * main - prints _putchar
 *
 * Return: Always (0) 
 */

int main(void)
{
	int i = 0;
	char c;
	char k[] = "_putchar\n";

	for (i ; i=8 ; i++)
	{
		c = k[i];
		_putchar(c);
	}

	return (0);
}
