#include "main.h"
/**
 *_printf -  prints a formatted string
 *@format: a format specifier
 *Return: the format length or count else -1 if null
 */
int _printf(const char *format, ...)
{
	int i, num, bin_len = 0, str_len = 0, form_length = 0;
	unsigned int unum;
	va_list args;
	char *str;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == '%')
		{
			format++;
			_putchar('%');
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(args, char*);
			if (str != NULL)
			{
				format++;
				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				form_length += (str_len - 1);
			}
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			format++;
			num = va_arg(args, int);
			mynum(num);
			form_length += num_digit(num);
		}
		else if (format[i + 1] == 'u')
		{
			format++;
			unum = va_arg(args, unsigned int);
			myuni(unum);
			form_length += (num_digit(unum) - 1);
		}
		else if (format[i + 1] == 'b')
		{
			format++;
			num = va_arg(args, int);
			bin_len += binaryof(num);
			form_length += (bin_len - 1);
		}
		form_length++;
	}
	va_end(args);
	return (form_length);
}
