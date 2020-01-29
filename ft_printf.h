/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <arroznie@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 22:24:14 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 22:06:03 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

typedef	struct		s_pfinfo
{
	char			*format;
	int				pos;
	va_list			va;
	char			flags;
	int				width;
	int				precision;
	char			type;
}					t_pfinfo;

enum
{
	PF_MINUS = (1 << 0),
	PF_ZERO = (1 << 1),
	PF_WIDTH = (1 << 2),
	PF_PRECIS = (1 << 3),
};

int     			ft_parse(t_pfinfo *info)
void				init_printf(t_pfinfo *info, const char *format);
int					ft_printf(const char *format, ...);

#endif
