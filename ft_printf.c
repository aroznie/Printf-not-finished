/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <arroznie@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 22:35:00 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/10 07:13:22 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static	t_pfinfo	*ft_init(t_pfinfo *list, const char *format)
{
	list->flags = 0;
	list->PF_WIDTH = 0;
	list->PF_PRECIS = 0;
	list->format = (char *)format;
	list->pos = 0;
	list->size = 0;
	list->PF_MINUS = 0;
	list->PF_ZERO = 0;
	list->precisize = 0;
	list->type = 0;
	return (list);
}

int			ft_printf(const char *format, ...)
{
	t_pfinfo 	info;

	ft_init(&info, format);
	va_start(info.va, format);
	while (format[info.pos])
	{
		if (format[info.pos] == '%')
		{
			ft_parse(&info, format);
			ft_convert(&info);
		}
		else
			write(1, format[info.pos], 1);		
		info.pos++;
	}
	return (info.pos);
}

/*
**
**
** salut %50.5s mec, "salut"
**
** salut %50.5s mec,
**
** parser:
**
** while (is_flags) = '- || 0'
** if (nombre ou *)
** if (.)
** 	pos++;
** 	{
** 		if (nombre ou *)
** 	}
** type = format[pos] == s
** convertis = salut
**%%yffhcgfc%
**%10.5
**
**
*/
