/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:21:11 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:24:14 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nb_decimals(long long n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static long long	make_pos(long long n)
{
	long long	ret;

	ret = n;
	if (ret < 0)
		ret = -ret;
	return (ret);
}

char	*ft_itoa(int n)
{
	char		*ret;
	long long	len;
	long long	num;

	num = make_pos(n);
	len = get_nb_decimals(n);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = 0;
	while (len > ((long long)n < 0))
	{
		ret[--len] = (num % 10) + '0';
		num /= 10;
	}
	if ((long long)n < 0)
		ret[0] = '-';
	return (ret);
}
