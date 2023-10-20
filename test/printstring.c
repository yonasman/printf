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
