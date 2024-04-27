
#include "libft.h"

/**
 * Code à refaire..
 * */

char *ft_strnstr(char *dst, char *src, int len)
{
    char *p_src;
    char *p_dst;
    char *ret;
    int lenn;

    p_src = src;
    p_dst = dst;
    ret = 0;
    lenn = len;

    if(!dst)
        return src;

    while(*p_src)
    {
        if(*p_src == *p_dst && lenn--)
        {
            ret = p_src;
            p_src++;
            p_dst++;
            continue;
        }
        else
        {
            ret = 0;
            p_dst = dst;
            lenn = len;
        }
        
        if(!*p_dst)
            break;

        p_src++;
    }

    return ret;
}
