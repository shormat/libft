/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:23:09 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:25:59 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*last_occurence;

	last_occurence = 0;
	while (*s)
	{
		if (*s == c)
			last_occurence = s;
		s++;
	}
	if (*s == c)
		return (s);
	return (last_occurence);
}
