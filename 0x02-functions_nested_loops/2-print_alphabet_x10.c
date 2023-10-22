#include "main.h"
/**
 *  print_alphabet_x10 - prits alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int b;

	c = 'a';
	b = 1;
	while (b <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		b++;
		_putchar('\n');
	}
}
