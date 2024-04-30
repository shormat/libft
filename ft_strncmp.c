/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:22:57 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:25:54 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	lens1;
	size_t	lens2;
	size_t	len;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = lens1 + 1;
	if (lens2 > lens1)
		len = lens2 + 1;
	if (len > n)
		len = n;
	return (ft_memcmp(s1, s2, len));
}
