#include <stdio.h>
/**
 * main - this program prints the size of various computer types
 * Return: 0(Success)
 */
int main(void)
{
printf("Size of a char: %zn byte(s)\n", sizeof(char));
printf("Size of an int: %zn byte(s)\n", sizeof(int));
printf("Size of a long int: %zn byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zn byte(s)\n", sizeof(long long int));
printf("Size of a float: %zn byte(s)\n", sizeof(float));
return (0);
}
