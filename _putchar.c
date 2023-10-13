#include "printf.h"
/**
 *_putchar - prints a character in stdout
 *@c: inpute char
 *
 *Return: 1 if success else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
