/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:20:39 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:26:04 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	is_intset(const char *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ret;

	start = 0;
	end = strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_intset(set, s1[start]))
		start++;
	while (end > start && is_intset(set, s1[end - 1]))
		end--;
	ret = malloc(sizeof(char) * (end - start) + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, (char *)s1 + start, end - start);
	ret[end - start] = 0;
	return (ret);
}
