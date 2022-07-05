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

	while (i < 9) 
	{
		c = k[i];
		_putchar(c);
		i++;
	}

	return (0);
}
