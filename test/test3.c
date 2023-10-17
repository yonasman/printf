#include "main.h"
int main()
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;
	int len;
	/*char rot[] = "hello";*/
	char w = 'w';
	char *str = "jeo";
	int num = 12345;
	int neg = -12345;
	int bin = 10;
	int hex = 102345;
	int oct = 12345;
	void *addr = (void *)0x7ffe637541f0;
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
	len = _printf("%o\n", num);
	_printf("%d\n", len);
	len = _printf("%u\n", ui);
	_printf("%d\n", len);
	len = _printf("%x\n", hex);
	_printf("%d\n", len);
	len = _printf("%X\n", hex);
	_printf("%d\n", len);
	len = _printf("%S\n", "Best\nSchool");
	_printf("%d\n", len);
	len = _printf("Address:[%p]\n", addr);
	_printf("%d\n", len);
	len = _printf("%r\n", str);
	_printf("%d\n", len);
	/*len = _printf("%R", rot);
	  _printf("%d", len);*/
	_printf("%+d\n", -6);
	len = _printf("%+d\n", 6);
	_printf("%d\n", len);
	_printf("% d\n", -6);
	len = _printf("% d\n", 6);
	_printf("%d\n", len);
	len = _printf("%#x\n", hex);
	len = _printf("%#X\n", hex);
	_printf("%d\n", len);
	len = _printf("%#o\n", oct);
	_printf("%d\n", len);
	return (0);
}
