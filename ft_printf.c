/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:53:53 by nhuang            #+#    #+#             */
/*   Updated: 2023/05/30 18:40:48 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libftprintf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_portal(va_list args, char cha)
{
	if (cha == 'c')
	{
		char a;
		a = va_arg(args, int);
		write(1, &a, 1);
		return (1);
	}
	return (0);
}

int	ft_eval(char cha)
{
	if (cha == 'c' || cha == 's' || cha == 'p' || cha == 'p' || cha == 'd'
		|| cha == 'i' || cha == 'u' || cha == 'x' || cha == 'X' || cha == '%')
		return (1);
	else
		return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && ft_eval(s[i + 1]) == 1)
		{
			length += ft_portal(args, s[i + 1]);
			write(1, "ya", 2);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			length++;
		}
		i++;
	}
	return (length);
}

int	main ()
{
	char	i;
	i = 'Q';
	write(1, "1\n", 2);
	int	a;
	a = ft_printf("abcd%c", i);
	printf("\n");
	// int	b;
	// b = printf("abcd%p", str);
	printf("\n1- %d ", a);
	return (0);
}
