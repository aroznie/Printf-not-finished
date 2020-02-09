#include "ft_printf.h"

int     ft_parse_flags(t_pfinfo *info, const char *format)
{
    while (format[info->pos] == '0' || format[info->pos] == '-')
    {
        if (format[info->pos] == '0' && info->PF_ZERO != 0)
            info->PF_ZERO++;
        if (format[info->pos] == '-' && info->PF_ZERO != 0)
            info->PF_MINUS++;
        info->pos++;
    }
    return (0);
}

int     ft_parse_width(t_pfinfo *info, const char *format)
{
    if (ft_isdigit(format[info->pos]) == 1)
    {
        info->PF_WIDTH++;
		info->size = ft_atoi(format + info->pos);
		while (ft_isdigit(format[info->pos]) == 1)
			info->pos++;
    }
    else if (format[info->pos] == '*')
    {
        info->PF_WIDTH++;
		info->size = va_arg(info->va, int);
		info->pos++;
    }
    return (0);
}

int     ft_parse_presic(t_pfinfo *info, const char *format)
{
    
}

int     ft_parse(t_pfinfo *info, const char *format)
{
    if (format[info->pos] == '%')
    {
		info->pos++;
        if (format[info->pos] == '%')
        {
            write(1, format[info->pos], 1);
            info->pos++;
            while (format[info->pos] != '%')
            {
                write(1, format[info->pos], 1);
                info->pos++;
            }
            return (ft_parse(info, format));
        }
    }
	pf_parse_flags(info, format);
	pf_parse_width(info, format);
    pf_parse_pres(info, format);
	pf_parse_type(info, format);
}