/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:36:01 by nhuang            #+#    #+#             */
/*   Updated: 2023/06/26 19:42:23 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pointer(usigned long long int n, char cha)
{
	char	*base;
	int		count;

	count = 0;
	if (cha == 'p')
	{
		write(1, "0x", 2);
		count =+ 2;
	}
	if(n >= 16)
	{
		ft_puthex(n / 16, x);
		ft_puthex(n % 16, x);
	}
	else
	{
		write(1, &)
	}
}