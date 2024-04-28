
#include "libft.h"

/**
 * Code à refaire..
 * */

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
    size_t needlelen;

    if(!(*needle))
        return haystack;

    needlelen = ft_strlen(needle);

    while(*haystack && len > needlelen-1)
    {
        if(!ft_memcmp(haystack, needle, len))
            return --haystack;

        haystack++;
        len--;
    }

    return NULL; 
}
