#include "ft_printf.h"

char    ft_convert_i(t_pfinfo *info)
{
    char *i;

    i = ft_itoa(va_arg(info->va, int));
}