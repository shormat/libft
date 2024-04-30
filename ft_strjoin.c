/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:22:38 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:25:07 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	if (!s2)
		return (ft_strdup((char *)s1));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc(sizeof(*ret) * (len_s1 + len_s2 + 1));
	if (!ret)
		return (NULL);
	ft_memcpy((void *)ret, (void *)s1, len_s1);
	ft_memcpy((void *)ret + len_s1, (void *)s2, len_s2);
	*(ret + len_s1 + len_s2) = 0;
	return (ret);
}
