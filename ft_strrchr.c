
#include "libft.h"

char *ft_strrchr(char *s, int c)
{
    char *last_occurence;

    last_occurence = 0;
    while(*s)
    {
        if(*s == c)
            last_occurence = s;
        s++;
    }

    if(*s == c)
        return s;

    return last_occurence;
}
