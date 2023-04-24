/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:53:53 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/24 15:51:22 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

t_print	*ft_initiate_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

int	ft_eval_format(t_print *tab, const char *format, int i)
{
	while (format[i] != 'u' && format[i] != 'd' && format[i] != 'c' && format[i] != 's' && format[i] != 'u' && format[i] != 'p' && format[i] != 'x' && format[i] != 'X' && format[i] != '%')
	{
		if (format[i] == '.')
			tab->pnt = 1;
		if (format[i] == '-')
			tab->dash = 1;
		if (format[i] == '0')
			tab->is_zero = 1;
		if (format[i] == '%')
			write(1, "%", 1);
		if (format[i] == ' ')
			tab->sp = 1;
		if (format[i] == '+')
			tab->sign = 1;
	}
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;

	tab = malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initiate_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab->args);
	ret += tab->tl;
	free(tab);
	return (ret);
}
