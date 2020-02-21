#include "ft_printf.h"

char    ft_convert_c(t_pfinfo *info)
{
    char *c;

    if (!(c = malloc(sizeof(char) * 2)))
			return (NULL);
		c[0] = (char)va_arg(info->va, int);
		c[1] = '\0';
}