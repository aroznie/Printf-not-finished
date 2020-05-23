#include "ft_printf.h"

char    ft_zero(char c, t_pfinfo *info, size_t size_data)
{
    char *tmp;

    if (info->PF_ZERO == 1 && info->PF_PRECIS != 1)
    {
        if (!(tmp = ft_calloc(sizeof(char), (info->size -  size_data + 1))))
            return (NULL);
        tmp = ft_memset(tmp, '0', info->size - size_data);
        return (ft_strjoinfree(tmp, c, 3));
    }
    return (NULL);
}