/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:23:18 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:26:07 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char *s, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (len > s_len)
		return (s_len);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	len_ret;

	if (!s)
		return (NULL);
	if (!len || start >= (size_t)ft_strlen(s))
		return (ft_strdup(""));
	len_ret = get_len((char *)s, len);
	ret = malloc(sizeof(*ret) * (len_ret + 1));
	if (!ret)
		return (NULL);
	ft_memcpy((void *)ret, (void *)s + start, len_ret);
	*(ret + len_ret) = 0;
	return (ret);
}
