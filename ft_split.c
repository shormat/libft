/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shormat <shormat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:22:26 by shormat           #+#    #+#             */
/*   Updated: 2024/04/30 23:42:06 by shormat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_occ(const char *s, char c)
{
	size_t	count;
	int		inside_word;

	count = 0;
	inside_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (inside_word)
			{
				inside_word = 0;
				count++;
			}
		}
		else
		{
			if (!inside_word)
				inside_word = 1;
		}
		s++;
	}
	if (inside_word)
		count++;
	return (count);
}

static size_t	get_sublensz(char const *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s && *s != c)
	{
		s++;
		ret++;
	}
	return (ret);
}

static void	free_arr(char **t, size_t i)
{
	if (!t)
		return ;
	while (i > 0)
	{
		free(t[--i]);
	}
	free(t);
}

static int	fill_arr(char **ret, const char *s, size_t i, size_t sublen)
{
	ret[i] = malloc(sizeof(char) * (sublen + 1));
	if (!ret[i])
	{
		free_arr(ret, i);
		return (0);
	}
	ft_memcpy((void *)ret[i], (void *)s, sublen + 1);
	ret[i][sublen] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	len;
	size_t	sublen;
	size_t	i;

	if (!s)
		return (NULL);
	len = count_occ(s, c);
	ret = malloc(sizeof(char *) * (len + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			sublen = get_sublensz(s, c);
			if (!fill_arr(ret, s, i++, sublen))
				return (NULL);
			s += sublen;
		}
        else
		    s++;
	}
	ret[len] = NULL;
	return (ret);
}
