#include "main.h"
int main()
{
	char w = 'w';
	char *str = "jeo";
	_printf("hello\n");
	_printf("hello %c\n", w);
	_printf("hello %s\n", str);
	_printf("hello %c %s\n", w, str);
	_printf("hello %%\n");

	return (0);
}
