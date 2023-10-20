#include "main.h"
int main()
{
	int len = 0;
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d\n", len);
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("\n%s\n", "");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("%");
	_printf("%!\n");
	len = printf("%i\n", INT_MIN);
	len = _printf("%i\n", INT_MIN);
	_printf("%d\n", len);
	len = _printf("%i\n", INT_MAX);
	_printf("%d\n", len);
	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	return (0);
}
