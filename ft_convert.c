#include "ft_printf.h"

void    ft_convert(t_pfinfo *info, const char *format)
{
    if (format[info->pos] == 'c')
        ft_convert_c();
    else if (format[info->pos] == 's')
        ft_convert_s();
    else if (format[info->pos] == 'd')
        ft_convert_d();
    else if (format[info->pos] == 'u')
        ft_convert_u();
    else if (format[info->pos] == 'i')
        ft_convert_i();
    else if (format[info->pos] == 'x')
        ft_convert_x();
    else if (format[info->pos] == 'X')
        ft_convert_X();
}