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
    if (format[info->pos] == '.' && info->PF_PRECIS == 0)
	{
		info->PF_PRECIS++;
		info->pos++;
	}
	if ((ft_isdigit(format[info->pos])) == 1 && info->PF_PRECIS == 1)
	{
		info->precisize = ft_atoi(format + info->pos);
		while (ft_isdigit(format[info->pos]) == 1)
			info->pos++;
	}
	else if (format[info->pos] == '*' && info->PF_PRECIS == 1)
	{
		info->precisize = va_arg(info->va, int);
		info->pos++;
	}
	return (0);
}

void    ft_parse_typeieuvipubrvui

if format pos mes couilles == c s x d u i X
    type = pos

int     ft_parse(t_pfinfo *info, const char *format)
{
	info->pos++;
    if (format[info->pos] == '%')
    {
        write(1, format[info->pos], 1);
        return 0;
    }
    ft_init(&info, format);
	pf_parse_flags(info, format);
	pf_parse_width(info, format);
    pf_parse_pres(info, format);
	pf_parse_type(info, format);
    return (0);
}