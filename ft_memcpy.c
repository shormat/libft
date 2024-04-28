
#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t				i;
	unsigned char	*psrc;
	unsigned char	*pdst;

	i = 0;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;

    if(src == dst)
        return (dst);

    while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
