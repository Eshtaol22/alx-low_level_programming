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

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
