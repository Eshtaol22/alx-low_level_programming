#include<stdio.h>
/**
 * main - this program writes the size of various computer types
 * Return: 0(Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %ln byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %ln byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ln byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %ln byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %ln byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
