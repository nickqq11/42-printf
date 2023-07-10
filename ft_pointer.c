/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:36:01 by nhuang            #+#    #+#             */
/*   Updated: 2023/07/10 15:50:03 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long int n, char cha)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (cha == 'p')
	{
		write(1, "0x", 2);
		count += 2;
	}
	if (n >= 16)
	{
		ft_puthex(n / 16, 'x');
		ft_puthex(n % 16, 'x');
	}
	else
	{
		write(1, &base[n], 1);
		count++;
	}
	return (count);
}
