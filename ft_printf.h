/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <arroznie@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 22:24:14 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/09 03:08:51 by arroznie    ###    #+. /#+    ###.fr     */
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
	int				size;
	int				PF_ZERO;
	int				PF_WIDTH;
	int				PF_MINUS;
	int				PF_PRECIS;
	char			type;
}					t_pfinfo;

int     			ft_parse(t_pfinfo *info, const char *format);
void				init_printf(t_pfinfo *info, const char *format);
int					ft_printf(const char *format, ...);

#endif
