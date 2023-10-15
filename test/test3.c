#include "main.h"
int main()
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;
	int len;
	char w = 'w';
	char *str = "jeo";
	int num = 12345;
	int neg = -12345;
	int bin = 10;
	_printf("hello\n");
	len = _printf("hello\n");
	_printf("%d\n", len);
	_printf("hello %c\n", w);
	_printf("hello %s\n", str);
	_printf("hello %c %s\n", w, str);
	len = _printf("hello %c %s\n", w, str);
	_printf("%d\n", len);
	_printf("hello %%\n");
	_printf("hello %d\n", num);
	len = _printf("hello %d\n", num);
	_printf("%d\n", len);
	len = _printf("hello %d\n", neg);
	_printf("%i\n", len);
	_printf("%b\n", bin);
	len = _printf("%b\n", bin);
	_printf("%d\n", len);
	len = _printf("%u\n", ui);
	_printf("%d\n", len);
	return (0);
}
