/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:51:44 by nhuang            #+#    #+#             */
/*   Updated: 2023/06/26 17:45:34 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_uppercase(char up)
{
	if (up >= 'a' && up <= 'f')
		putchar(up - 32);
	else
		putchar(up);
}

int	ft_puthex(int n, char check)
{
	int		count;
	char	*base_x;
	char	*base_up;

	base_x = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		count += 1;
		n *= -1;
	}
	if (n >= 16)
	{
		ft_puthex(n / 16, check);
		ft_puthex(n % 16, check);
	}
	else
	{
		if (check == "x")
			write(1, &base_x[n], 1);
		if (check == "X")
			ft_uppercase(base_x[n]);
		count++;
	}
	return (count);
}
