#include "main.h"
/**
 *hexi - convert decimal to hexidecimal
 *@num: number to be converted
 *Return: number of digit
 */
int hexi(int num)
{
	int i, j, remainder;
	/*store it in an array*/
	int hex[32];

	if (num == 0)/*for the while loop*/
	{
		_putchar('0');
		i = 1;
	}
	i = 0;
	while (num > 0)/*divide each digit by 16 till 0*/
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else /*remainder > 10*/
		{
			hex[i] = remainder - 10 + 'a';
		}
		num = num / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (i);
}
/**
 *hexi_ptr - convert decimal to hexidecimal
 *@ptr: ptr to be converted
 *Return: number of digit
 */
int hexi_ptr(void *ptr)
{
	unsigned long int num = (unsigned long int)ptr;
	int i, j, remainder;
	/*store it in an array*/
	int hex[32];

	if (num == 0)/*for the while loop*/
	{
		_putchar('0');
		i = 1;
	}
	i = 0;
	while (num > 0)/*divide each digit by 16 till 0*/
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else /*remainder > 10*/
		{
			hex[i] = remainder - 10 + 'a';
		}
		num = num / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (i);
}
/**
 *heXi - convert decimal to hexidecimal
 *@num: number to be converted
 *Return: number of digit
 */
int heXi(int num)
{
	int i, j, remainder;
	/*store it in an array*/
	int hex[32];

	if (num == 0)/*for the while loop*/
	{
		_putchar('0');
		i = 1;
	}
	i = 0;
	while (num > 0)/*divide each digit by 16 till 0*/
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else /*remainder > 10*/
		{
			hex[i] = remainder - 10 + 'A';
		}
		num = num / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (i);
}
/**
 *printS - prints special string that are not in ASCII
 *@s: the string
 *
 *Return: the number of charcters printed
 */
int printS(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			heXi(s[i]);
		}
		else
			_putchar(s[i]);
	}

	return (i);
}
