#include "main.h"
int main()
{
	int len;
	char w = 'w';
	char *str = "jeo";
	int num = 12345;
	int neg = -12345;
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
	_printf("%d\n", len);

	return (0);
}
