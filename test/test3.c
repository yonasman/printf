#include "main.h"
int main()
{
	char w = 'w';
	char *str = "jeo";
	int num = 12345;
	int neg = -12345;
	_printf("hello\n");
	_printf("hello %c\n", w);
	_printf("hello %s\n", str);
	_printf("hello %c %s\n", w, str);
	_printf("hello %%\n");
	_printf("hello %d\n", num);
	_printf("hello %d\n", neg);

	return (0);
}
