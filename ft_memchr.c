/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:21:13 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:24:18 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	occ;

	ptr = (unsigned char *)s;
	occ = (unsigned char)c;
	while (n--)
	{
		if (*ptr == occ)
		{
			return (s);
		}
		ptr++;
		s++;
	}
	return (NULL);
}
