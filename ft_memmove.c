
#include "libft.h"

void	*ft_memmove(void *dst, void *src, int len)
{
	int				tlen;
	unsigned char	*psrc;
	unsigned char	*pdst;
	int				i;

	tlen = len;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	i = 0;
	while (tlen-- > 0)
	{
		if (&dst[tlen] == &src[tlen])
			return (dst);
	}
	while (i < len)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
