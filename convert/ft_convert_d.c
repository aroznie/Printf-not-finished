#include "ft_printf.h"

char    ft_convert_d(t_pfinfo *info)
{
    char *d;

    d = ft_itoa(va_arg(info->va, int));
}