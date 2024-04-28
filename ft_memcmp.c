
#include "libft.h"

int ft_memcmp(void *s1, void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;
    size_t i;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    i  = 0;

    while(i < n)
    {
        if(*p1 != *p2)
            return *p1 - *p2;
        
        p1++;
        p2++;
        i++;
    }

    return 0;
}
