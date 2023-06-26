/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:53:14 by nhuang            #+#    #+#             */
/*   Updated: 2023/06/26 15:05:45 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_putnbr_un(unsigned int n)
{
	int	count;

	if (n >= 10)
	{
		ft_putnbr_un(n / 10);
		ft_putnbr_un(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		count++;
	}
	return (count);
}
