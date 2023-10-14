#include "main.h"

int _printf(const char *format, ...);
int main()
{
	char w = 'w';
	char *st ="HEY";
	_printf("hello\n");
	_printf("hello %c", w);
	_printf("hello %s", st);
	_printf("hello %c %s", w, st);
	return 0;
}
