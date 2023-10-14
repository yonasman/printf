#include "main.h"
int main ()
{
	int len = 0;
	char a = 'm';
	char *trs = NULL;
	len = _printf("hello%s", trs);
	_printf("%c\n", a);
	_printf("%%\n");
	_printf("%s", trs);
	printf("%d", len);

	return (0);
}
