/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:22:26 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 17:24:56 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_occ(char const *s, char c)
{
	int	occ;
	int	inside_word;

	occ = 0;
	inside_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			inside_word = 0;
		}
		else
		{
			if (!inside_word)
			{
				occ++;
				inside_word = 1;
			}
		}
		s++;
	}
	return (occ);
}

static int	ft_substrlen(char const *s, char c)
{
	int	ret;

	ret = 0;
	while (*s != c && *s)
	{
		ret++;
		s++;
	}
	return (ret);
}

static void	ft_free(char **ret, size_t i)
{
	while (i > 0)
	{
		free(ret[--i]);
	}
	free(ret);
}

static void	ft_splitter(char **ret, char const *s, char c, size_t occ)
{
	size_t	i;
	size_t	substrlen;

	i = 0;
	while (*s && i < occ)
	{
		substrlen = ft_substrlen(s, c);
		ret[i] = malloc(sizeof(char) * (substrlen + 1));
		if (!ret[i])
		{
			ft_free(ret, i);
			return ;
		}
		ft_memcpy((void *)ret[i], (void *)s, substrlen);
		ret[i][substrlen] = '\0';
		s += substrlen;
		while (*s == c) // Skip consecutive delimiters
			s++;
		i++;
	}
	ret[occ] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	occ;

	if (!s)
		return (NULL);
	occ = count_occ(s, c);
	char **ret = malloc(sizeof(char *) * (occ + 2));
		// One extra for empty string and one for NULL terminator
	if (!ret)
		return (NULL);
	ft_splitter(ret, s, c, occ);
	if (!ret[0]) // If splitting failed, free memory and return NULL
	{
		free(ret);
		return (NULL);
	}
	ret[occ + 1] = NULL; // NULL terminate the array
	return (ret);
}
