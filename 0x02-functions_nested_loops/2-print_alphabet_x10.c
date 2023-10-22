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
	b = 0;
	while (b <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
