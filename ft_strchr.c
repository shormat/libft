/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:22:29 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:24:59 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	*occurence;

	occurence = 0;
	while (*s)
	{
		if (*s == c)
		{
			occurence = s;
			break ;
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (occurence);
}
