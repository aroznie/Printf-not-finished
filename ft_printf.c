#include "ft_printf.h"

void init_printf(s_pfinfo *info, const char *format)
{
	info->pos = 0;
	info->offset = 1;
	info->format = format;
}

void check_type(s_pfinfo *info)
{
	if (info->format[info->pos + info->offset] == 'c') {
		char c = va_arg(info->va, int);
		putchar(c);
	}
	else if (info->format[info->pos + info->offset] == '%') {
		putchar('%');
	}
	info->pos++;
}

//void putchar(char c)
//{
//	write(1, &c, 1);
//}

int	ft_printf(const char *format, ...)
{
	s_pfinfo info;

	init_printf(&info, format);
	va_start(info.va, format);
	while (format[info.pos]) {
		if (format[info.pos] == '%') {
			check_type(&info);
		} else {
			putchar(format[info.pos]);
		}
		info.pos++;
	}
}

int main()
{
	ft_printf("lol %c", 'p');
	return(0);
}