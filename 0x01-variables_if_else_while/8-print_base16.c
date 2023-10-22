#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Entry point
 * Return: 0(Success)
 */
int main(void)
{
	int a;
	char m;

	a = 0;
	m = 'a';
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
