#include "main.h"
/**
 *mynum - prints to stdout using _putchar
 *@num: number to be printed on stdout
 *Return: 0 if success else -1
 */
void mynum(int num)
{
	/*for negative numbers*/
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	/*for postive numbers*/
	if (num / 10)
	{
		/*recursive function until num / 10 is 0*/
		mynum(num / 10);
	}
	/*prints last digit of num*/
	_putchar((num % 10) + '0');
}
/**
 *num_digit - count number of digits
 *@num: number to be counted
 *Return: number of digits
 */
int num_digit(int num)
{
	int count = 0;

	/*if negative number account for negative sign*/
	if (num < 0)
	{
		count = 1;
		num = -1 * num;
	}
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
