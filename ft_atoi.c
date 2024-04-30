/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:27:02 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:27:04 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int			signe;
	long long	ret;

	signe = 0;
	ret = 0;
	while (*str && ft_isspace(*str))
		str++;
	while (*str && ((*str == '-') || (*str == '+') || (*str >= '0'
				&& *str <= '9')))
	{
		if (!signe && (*str == '+'))
			signe = 1;
		else if (!signe && (*str == '-'))
			signe = -1;
		else if (*str >= '0' && *str <= '9')
			ret = (ret * 10) + (*str - '0');
		else
			break ;
		str++;
	}
	return (ret * ((2 * (signe >= 0)) - 1));
}
