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
