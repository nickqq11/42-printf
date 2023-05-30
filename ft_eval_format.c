/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:33:02 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/25 14:48:48 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_eval_format (t_print *tab, const char *format, int i + 1)
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
		if (format[i] >= '0' && format[i] == <= '9')
			tab->wdt = i - '0';
		
	}
}