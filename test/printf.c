#include "main.h"
/**
 *_printf -  prints a formatted string
 *@format: a format specifier
 *
 *Return: the format length or count else -1 if null
 */
int _printf(const char *format, ...)
{
	unsigned int i, str_len = 0, form_length = 0;
	va_list args;
	char *str;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(args, char*);
			format++;
			while (str[str_len] != '\0')
				str_len++;
			write(1, str, str_len);
			form_length += str_len;
		}
		form_length++;
	}
	va_end(args);
	return (form_length);
}
