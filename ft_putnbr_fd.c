/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:22:19 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:24:45 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnb(long long n, int fd)
{
	char	c;

	c = '0';
	if (n >= 10)
	{
		putnb(n / 10, fd);
		putnb(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(c + n, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	putnb(num, fd);
}
