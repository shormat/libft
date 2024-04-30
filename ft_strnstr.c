/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:23:03 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:25:56 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	needlelen;

	if (!(*needle))
		return (haystack);
	needlelen = ft_strlen(needle);
	while (*haystack && len > needlelen - 1)
	{
		if (!ft_memcmp(haystack, needle, needlelen))
			return (haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
