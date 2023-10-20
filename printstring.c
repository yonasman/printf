#include "main.h"
/**
 *_puts - prints a string using _putchar
 *@str: string to be printed
 *
 *Return: 0 if it is successful
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 *num_udigit - count number of digits
 *@num: number to be counted
 *Return: number of digits
 */
int num_udigit(unsigned int num)
{
	int count = 0;

	if (num == 0) /*to use a while loop*/
	{
		count++;
	}
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count - 1);
}
