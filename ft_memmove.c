
#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
    unsigned char *pdst;
    unsigned char *psrc;
    
    pdst = (unsigned char *)dst;
    psrc = (unsigned char *)src;

    if(!dst && !src)
        return 0;

    if(pdst <= psrc)
        return ft_memcpy(dst, src, len);
    
    while(len--)
    {
        *(pdst+len) = *(psrc+len);
    }

    return dst;
}
