#include "ft_printf.h"

char    ft_width(char c, t_pfinfo *info, size_t size_data)
{
    char    *tmp;

    if (info->size > size_data)
    {
        if (!(tmp = ft_calloc(sizeof(char), (info->size -  size_data + 1))))
            return (NULL);
        tmp = ft_memset(tmp, " ", info->size - size_data);
        return (ft_strjoinmod(tmp, c, 3));
    }
    if (info->size > size_data && info->PF_MINUS == 1)
    {
        if (!(tmp = ft_calloc(sizeof(char), (info->size -  size_data + 1))))
            return (NULL);
        tmp = ft_memset(tmp, " ", info->size - size_data);
        return (ft_strjoinmod(c, tmp, 3));
    }
    return (c);
}