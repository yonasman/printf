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
	len = _printf("%b\n", -1024);
	_printf("%b\n", UINT_MAX);
	len = _printf("%u\n", 1024);
	_printf("%d\n", len);
	len = printf("%u\n", 1024);
	_printf("%d\n", len);
	len = _printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
	len = _printf("%p\n", NULL);
	printf("%d\n", len);
	len = _printf("%p%p\n", (void *) 0x6ff42510b6f8, (void *) 0x7fff510236f8);
	printf("%d\n", len);
	return (0);
}
