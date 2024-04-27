
#include "libft.h"

int ft_memcmp(void *s1, void *s2, int n)
{
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;

    while(*p1 == *p2 && n--)
    {
        p1++;
        p2++;
    }

    return *p1 - *p2;
}
