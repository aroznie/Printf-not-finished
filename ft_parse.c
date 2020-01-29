int     ft_parse_flags(t_pfinfo *info, const char *format)
{
    while (format[info.pos] == '0' || format[info.pos] == '-')
    {
        if (format[info.pos] == '0' && PF_ZERO != 0)
            enum->PF_ZERO++;
        if (format[info.pos] == '-' && PF_ZERO != 0)
            enum->PF_MINUS++;
        info.pos++;
    }
}

int     ft_parse_width(t_pfinfo *info, const char *format)
{
    if (ft_isdigit(format[info.pos] == 1))

    else if (format[info.pos] == '*')

    info.pos++;
}

int     ft_parse_type(t_pfinfo *info, const char *format)
{
    
}

int     ft_parse(t_pfinfo *info, const char *format)
{
    if (format[info.pos] == '%')
		info.pos++;
	pf_parse_flags(info, format);
	pf_parse_size(info, format);
	pf_parse_type(info, format);
}