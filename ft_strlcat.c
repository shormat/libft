
#include "libft.h"

// à tester !!

int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	int	dstlen;
	int	i;
	unsigned int	j;

	dstlen = ft_strlen(dst);
	i = size - dstlen;
	j = 0;
	if (!i)
		return (dstlen + ft_strlen(src));
	while (src[j] && j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (dstlen + ft_strlen(src));
}
