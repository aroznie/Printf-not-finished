#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

typedef	struct s_pfinfo
{
	const char 	*format;
	va_list 	va;
	int 		pos;
	int 		offset;
} s_pfinfo;

void init_printf(s_pfinfo *info, const char *format);
int	ft_printf(const char *format, ...);


#endif
