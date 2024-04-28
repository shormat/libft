
#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{   
    unsigned char *ptr;
    unsigned char occ;

    ptr = (unsigned char *) s;
    occ = (unsigned char) c;

    while(n--)
    {
        if(*ptr == occ)
        {
            return s;
        }

        ptr++;
        s++;
    }
    
    return NULL;
}
