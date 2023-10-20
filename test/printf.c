#include "main.h"
/**
 *_printf -  prints a formatted string
 *@format: a format specifier
 *Return: the format length or count else -1 if null
 */
int _printf(const char *format, ...)
{
	int i, num, hex_length = 0, bin_len = 0, oct_len = 0, str_len = 0, form_length = 0;
	int rot_len = 0;
	unsigned int unum;
	va_list args;
	char *str;
	void *ptr;

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
		else if (format[i + 1] == '!')
		{
			format++;
			_putchar('%');
			_putchar('!');
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			format++;
			str = va_arg(args, char*);
			if (str != NULL)
			{
				while (str[str_len] != '\0')
					str_len++;
				_puts(str);
				form_length += (str_len - 1);
			}
			else
			{
				str = "(null)";
				write(1, str, 6);
				form_length += form_length + 0;
			}
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			format++;
			num = va_arg(args, int);
			mynum(num);
			form_length += num_digit(num);
		}
		else if (format[i + 1] == '+' && format[i + 2] == 'd')
		{
			format++;
			format++;
			num = va_arg(args, int);
			if (num > 0)
			{
				_putchar('+');
				mynum(num);
				form_length += num_digit(num) + 1;
			}
			else
			{
				mynum(num);
				form_length += num_digit(num);
			}
		}
		else if (format[i + 1] == ' ' && format[i + 2] == 'd')
		{
			format++;
			format++;
			num = va_arg(args, int);
			if (num > 0)
			{
				_putchar(' ');
				mynum(num);
				form_length += num_digit(num) + 1;
			}
			else
			{
				mynum(num);
				form_length += num_digit(num);
			}
		}
		else if (format[i + 1] == 'u')
		{
			format++;
			unum = va_arg(args, unsigned int);
			myuni(unum);
			form_length += num_udigit(unum);
		}
		else if (format[i + 1] == 'b')
		{
			format++;
			num = va_arg(args, int);
			bin_len += binaryof(num);
			form_length += (bin_len - 1);
		}
		else if (format[i + 1] == 'o')
		{
			format++;
			num = va_arg(args, int);
			oct_len += octof(num);
			form_length += (oct_len - 1);
		}
		else if (format[i + 1] == '#' && format[i + 2] == 'o')
		{
			format++;
			format++;
			_putchar('0');
			num = va_arg(args, int);
			oct_len += octof(num);
			form_length += ((oct_len - 1) + 1);
		}
		else if (format[i + 1] == 'x')
		{
			format++;
			num = va_arg(args, int);
			hex_length += hexi(num);
			form_length += (hex_length - 1);
		}
		else if (format[i + 1] == '#' && format[i + 2] == 'x')
		{
			format++;
			format++;
			_putchar('0');
			_putchar('x');
			num = va_arg(args, int);
			hex_length += hexi(num);
			form_length += ((hex_length - 1) + 2);
		}
		else if (format[i + 1] == 'X')
		{
			format++;
			num = va_arg(args, int);
			hex_length += heXi(num);
			form_length += (hex_length - 1);
		}
		else if (format[i + 1] == '#' && format[i + 2] == 'X')
		{
			format++;
			format++;
			_putchar('0');
			_putchar('X');
			num = va_arg(args, int);
			hex_length += heXi(num);
			form_length += ((hex_length - 1) + 2);
		}
		else if (format[i + 1] == 'S')
		{
			format++;
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(null)";
			str_len += printS(str);
			form_length += (str_len - 1);
		}
		else if (format[i + 1] == 'r')
		{
			format++;
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(null)";
			str_len += print_rev(str);
			form_length += (str_len - 1);
		}
		else if (format[i + 1] == 'R')
		{
			format++;
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(null)";
			rot_len += rot13(str);
			form_length += (rot_len - 1);
		}
		else if (format[i + 1] == 'p')
		{
			format++;
			_putchar('0');
			_putchar('x');
			ptr = va_arg(args, void *);
			hex_length += hexi_ptr(ptr);
			form_length += ((hex_length - 1) + 2);
		}
		form_length++;
	}
	va_end(args);
	return (form_length);
}
