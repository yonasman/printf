#include "main.h"
/**
 *mynum - prints to stdout using _putchar
 *@num: number to be printed on stdout
 *Return: number of digits of the binary
 */
void mynum(int num)
{
	/*using unsigned int unum to handle INT_MIN*/
	unsigned int unum;
	/*for negative numbers*/
	if (num < 0)
	{
		_putchar('-');
		unum = (unsigned int) (-1 * num);
	}
	else
	{
		unum = (unsigned int) (num);
	}
	/*for postive numbers*/
	if (unum / 10)
	{
		/*recursive function until num / 10 is 0*/
		mynum(unum / 10);
	}
	/*prints last digit of num*/
	_putchar((unum % 10) + '0');
}
/**
 *myuni - prints to stdout using _putchar
 *@num: number to be printed
 *Return: 0 if success
 */
void myuni(unsigned int num)
{
	if (num / 10)
	{
		myuni(num / 10);
	}
	_putchar((num % 10) + '0');
}
/**
 *num_digit - count number of digits
 *@num: number to be counted
 *Return: number of digits
 */
int num_digit(int num)
{
	/*to handle INT_MIN*/
	unsigned int unum;
	int count = 0;

	/*if negative number account for negative sign*/
	if (num < 0)
	{
		count = 1;
		unum = (unsigned int) (-1 * num);
	}
	else
		unum = (unsigned int) (num);
	if (unum == 0) /*to use a while loop*/
	{
		count++;
	}
	while (unum != 0)
	{
		unum = unum / 10;
		count++;
	}
	return (count - 1);
}
/**
 *binaryof - convert and print decimal number to binary
 *@num: number to be converted
 *Return: number of digit
 */
int binaryof(int num)
{
	int i, j;
	/*store binary number in an array*/
	int bin[32];

	i = 0;

	if (num == 0) /*to use while loop*/
	{
		_putchar(0 + '0');
		return (1);
	}
	while (num > 0) /*dividing num by two untill num is less than 0*/
	{
		bin[i] = num % 2; /*storing the last digit in bin*/
		num = num / 2;
		i++;
	}
	/*reversing bin*/
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin[j] + '0');
	}
	return (i);
}
/**
 *octof - convert and print decimal number to octal
 *@num: number to be converted
 *Return: number of digit
 */
int octof(int num)
{
	int i, j;
	/*store octal number in an array*/
	int oct[100];

	i = 0;

	if (num == 0) /*to use while loop*/
	{
		_putchar(0 + '0');
		return (1);
	}
	while (num > 0) /*dividing num by two untill num is less than 0*/
	{
		oct[i] = num % 8; /*storing the last digit in bin*/
		num = num / 8;
		i++;
	}
	/*reversing oct*/
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(oct[j] + '0');
	}
	return (i);
}
